#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>

#include "../synacor/common.h"
#include "../synacor/uint15.h"

uint16 reg[8] = { 0 };
uint16 mem[32767] = { 0 };
struct Stack
{
	std::stack<uint16, std::vector<uint16>> stack;
	void push(uint16 _a) { stack.push(_a); }
	uint16 pop()
	{
		uint16 const a = stack.top();
		stack.pop();
		return a;
	}
};
Stack stack;

template<typename T>
void fn4(T&& reg1fn)
{
	stack.push(reg[0]);
	stack.push(reg[3]);
	stack.push(reg[4]);
	stack.push(reg[5]);
	stack.push(reg[6]);
	reg[6] = reg[0];
	reg[5] = reg[1];
	reg[4] = mem[reg[0]];
	reg[1] = 0;

	do
	{
		reg[3] = 1 + reg[1];
		if (reg[3] > reg[4])
		{
			break;
		}
		reg[3] += reg[6];
		reg[0] = mem[reg[3]];
		reg1fn(); //reg[5]();
		reg[1]++;
	} while (reg[1] != 0);

	reg[6] = stack.pop();
	reg[5] = stack.pop();
	reg[4] = stack.pop();
	reg[3] = stack.pop();
	reg[0] = stack.pop();
}

// fn2 now inlined
uint16 fn2(uint16 a, uint16 b)
{
	return a ^ b; // (a | b) & (~(a & b));

	//0 = (0 | 1) & (~(0 & 1));

	/*stack.push(reg[1]);
	stack.push(reg[2]);
	reg[2] = reg[0] & reg[1];
	reg[2] = ~reg[2];
	reg[0] = reg[0] | reg[1];
	reg[0] = reg[0] & reg[2];
	reg[2] = stack.pop();
	reg[1] = stack.pop();*/
}

void fn1531()
{
	//stack.push(reg[1]);
	//reg[1] = reg[2];

	reg[0] ^= reg[2]; // reg[1]; // fn2(reg[0], reg[1]);
	std::cout << static_cast<char>(reg[0]);

	//reg[1] = stack.pop();
	//return;
}

void fn30()
{
	uint16 calls = 0;
fn30loop:;
	if (reg[0] == 0)
	{
		reg[0] = reg[1] + 1;
	}
	else
	{
		if (reg[1] == 0)
		{
			reg[0]--;
			reg[1] = reg[7];
			//fn30();
			stack.push(0);
			calls++;
			goto fn30loop;
		ret0:;
		}
		else
		{
			stack.push(reg[0]);
			reg[1]--;
			//fn30();
			stack.push(1);
			calls++;
			goto fn30loop;
		ret1:;
			reg[1] = reg[0];
			reg[0] = stack.pop();
			reg[0]--;
			//fn30();
			stack.push(2);
			calls++;
			goto fn30loop;
		ret2:;
		}
	}
	if (calls > 0)
	{
		--calls;
		switch (stack.pop())
		{
		case 0: goto ret0;
		case 1: goto ret1;
		case 2: goto ret2;
		}
	}
}

uint16 fn30r(uint16 reg0, uint16 reg1)
{
	if (reg0 == 0)
	{
		return reg1 + 1;
	}
	else // reg0 > 0
	{
		if (reg1 == 0)
		{
			return fn30r(reg0 - 1, reg[7]);
		}
		else // reg1 > 0
		{
			return fn30r(reg0 - 1, fn30r(reg0, reg1 - 1));
		}
	}
}

uint16 pow(uint16 x, uint16 n)
{
	if (n == 0)
	{
		return 1;
	}
	for (uint16 i = 1; i < n; ++i)
	{
		x *= x;
	}
	return x;
}

uint16 fn30c(uint16 reg0, uint16 reg1)
{
	return (reg1 * pow(reg[7], reg0 - 1)) + (reg0 * (reg[7] + 1));
}

uint16 mnCalc(uint16 m, uint16 n);

std::unordered_map<uint16, uint16> sCalced;
uint16 sCalc(uint16 m)
{
	auto findI = sCalced.find(m);
	if (findI != sCalced.end())
	{
		return findI->second;
	}
	else
	{
		uint16 const r = mnCalc(m, reg[7]);
		sCalced[m] = r;
		return r;
	}
}

uint16 mnCalc(uint16 m, uint16 n)
{
	if (m == 0)
	{
		return 1 + n;
	}
	if (m == 1)
	{
		return sCalc(0) + n;
	}
	return sCalc(m - 1) + (n * sCalc(m - 2));
}

struct param
{
	uint16 reg0;
	uint16 reg1;
	uint16 reg0beg;
	uint16 reg1beg;

	param(uint16 r0, uint16 r1) : reg0{ r0 }, reg1{ r1 }, reg0beg{ r0 }, reg1beg{ r1 } {}
};

uint16 fn30s(param p)
{
	std::vector<param> stack;
	stack.reserve(50000);
	stack.emplace_back(p);

	std::unordered_map<uint16, std::unordered_map<uint16, uint16>> precalc;

	param* i = &stack.back();

	auto findAlready = [&](uint16& o_found) -> bool
	{
		auto findI1 = precalc.find(i->reg0beg);
		if (findI1 != precalc.end())
		{
			auto findI2 = findI1->second.find(i->reg1beg);
			if (findI2 != findI1->second.end())
			{
				o_found =  findI2->second;
				return true;
			}
		}
		return false;
	};

	while (!stack.empty())
	{
		while (i->reg0 > 0)
		{
			if (i->reg1 == 0)
			{
				i->reg0--;
				i->reg1 = reg[7];
			}
			else
			{
				stack.emplace_back(i->reg0, i->reg1 - 1);
				i = &stack.back();
				uint16 res;
				if (findAlready(res))
				{
					stack.pop_back();
					i = &stack.back();
					i->reg1 = res;
					i->reg0--;
				}
			}
		}

		uint16 const res = i->reg1 + 1;
		if (stack.size() == 1)
		{
			return res;
		}
		else
		{
			precalc[i->reg0beg][i->reg1beg] = res;
			stack.pop_back();
			i = &stack.back();
			i->reg1 = res;
			i->reg0--;
		}
	}

	return -1;
}

uint16 pow2(uint16 n)
{
	return 1 << n;
}

uint16 modifiedAck(uint16 m, uint16 n)
{
	static uint16(*ack)(uint16, uint16) =
		[](uint16 m, uint16 n) -> uint16
	{
		switch (m)
		{
		case 0:
			return n + 1;
		case 1:
			return n + 1 + reg[7];
		case 2:
			return ((n + 2) * reg[7]) + n + 1;
		//case 3:
		//	return pow(reg[7], n);
		default:
			return n == 0 ? ack(m - 1, reg[7]) : ack(m - 1, ack(m, n - 1));
		}
	};
	return ack(m, n);
}

#include <functional>

template<typename T>
T ack15(uint16 m, uint16 n, uint16 x)
{
	std::function<T(uint16, T)> ack = [x, &ack](uint16 m, T n) -> T
	{

		switch (m)
		{
		case 0: return n + 1;
			// case 1: return n + 2;
		case 1: return n + x + 1;
			// case 2: return 3 + 2 * n;
		case 2: return (n + 2) * x + n + 1;
			// case 3: return 5 + 8 * (pow(T(2), (u16)n) - 1);
		default:
			return n == 0 ? ack(m - 1, x)
				: ack(m - 1, ack(m, n - 1));
		}

	};

	return ack(m, n);
}

template <typename T>
uint16 bruteforce(uint16 m, uint16 n, uint16 x, uint16 y)
{
	if (x > 0)
		return ((uint16)ack15<T>(m, n, x)) & 0x7fff;

	for (uint16 x = 0; x < 0x8000; x++)
	{
		uint16 r = ((uint16)ack15<T>(m, n, x)) & 0x7fff;
		if (r == y)
			return x;
	}
	return 0;
}

void Teleport()
{
	stack.push(reg[0]);
	stack.push(reg[1]);
	stack.push(reg[2]);

	if (reg[7] == 0)
	{
		// l122:
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29545;
		reg[1] = 1531;
		reg[2] = 29438; // 4031 + 25407;
		fn4(fn1531);
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();

		reg[0] = 0;
		reg[2] = 27103; // 1 + 27102;

		// l125:
		for (; reg[2] <= reg[1]; ++reg[2])
		{
			reg[1] = mem[reg[2]];
			reg[0] += reg[1];
			reg[0] *= 31660;
			reg[0] ^= reg[1]; // fn2(reg[0], reg[1]);
			reg[1] = mem[27101];
			reg[1] += 27101;

			//reg[2]++;
			//reg[1] = (reg[2] > reg[1]) ? 1 : 0;
		}

		reg[1] = 25866;
		reg[2] = 32767;
		stack.push(reg[3]);
		reg[3] = 29663;
		//fn19();
		reg[3] = stack.pop();

		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29667;
		// l211: // erroneous
		reg[1] = 1531;
		reg[2] = 2291; // 660 + 1631;
		fn4(fn1531);
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();

		mem[2732] = 2488;
		mem[2733] = 0;
	}
	else
	{
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28844;
		reg[1] = 1531;
		reg[2] = 19953; // 5779 + 14174;
		fn4(fn1531);
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();

		//-
		//-
		//-
		//-
		//-

		reg[0] = 4;
		reg[1] = 1;
		fn30();

		if (reg[0] == 6)
		{
			stack.push(reg[0]);
			stack.push(reg[1]);
			stack.push(reg[2]);
			reg[0] = 29014;
			reg[1] = 1531;
			reg[2] = 22125; // 6929 + 15196;
			fn4(fn1531);
			reg[2] = stack.pop();
			reg[1] = stack.pop();
			reg[0] = stack.pop();

			reg[0] = reg[7];
			reg[1] = 25866;
			reg[2] = 32767;
			stack.push(reg[3]);
			reg[3] = 29241;
			//fn19();
			reg[3] = stack.pop();
		//fn97:
			stack.push(reg[0]);
			stack.push(reg[1]);
			stack.push(reg[2]);
			reg[0] = 29245;
			reg[1] = 1531;
			reg[2] = 24311; // 23693 + 618;
			fn4(fn1531);
			reg[2] = stack.pop();
			reg[1] = stack.pop();
			reg[0] = stack.pop();
			mem[2732] = 2498;
			mem[2733] = 0;
			reg[1] = 2710; //2708 + 2;
			mem[reg[1]] = 32767;
		}
		else
		{
			stack.push(reg[0]);
			stack.push(reg[1]);
			stack.push(reg[2]);
			reg[0] = 29400;
			reg[1] = 1531;
			reg[2] = 19570; // 3192 + 16378;
			fn4(fn1531);
			reg[2] = stack.pop();
			reg[1] = stack.pop();
			reg[0] = stack.pop();
		}
	}

	reg[2] = stack.pop();
	reg[1] = stack.pop();
	reg[0] = stack.pop();
}

int main()
{
	uint16 const goal_reg0 = 6;

	std::cout << "ref: \n";
	std::cout << "0: 2\n1: 65533/32765\n";
	/*for (uint16 i = 0; i <= 1; ++i)
	{
		reg[0] = 4;
		reg[1] = 1;
		reg[7] = i;
		fn30();
		if (i <= 3)
		{
			std::cout << i << ": " << reg[0] << '\n';
		}
		if (reg[0] == goal_reg0)
		{
			std::cout << "reg[7] = " << i << '\n';
		}
	}*/

	std::cout << "\n\nactual: \n";

	uint16 const reg0 = 4;
	uint16 const reg1 = 1;

	for (uint16 i = 0; i <= 65535; ++i)
	{
		reg[7] = i;
		sCalced.clear();
		uint15 const res = modifiedAck(reg0, reg1);//fn30c(reg0, reg1);
		if (i <= 3)
		{
			std::cout << i << ": " << res.x << '\n';
		}
		if (res == goal_reg0)
		{
			std::cout << "reg[7] = " << i << '\n';
		}
	}

	//std::cout << bruteforce<uint16>(4, 1, 2, 6);


	return 0;
}