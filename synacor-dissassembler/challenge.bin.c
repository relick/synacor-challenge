		-
		-
		std::cout << "Welcome to the Synacor Challenge!\n";
		std::cout << "Please record your progress by putting codes like\n";
fn106:	
		std::cout << "this one into the challenge website: MvQNsZixuLOX\n";
		std::cout << "\nExecuting self-test...\n";
		std::cout << "\n";
		goto 0;
0:		-
		-
		-
		-
		-
		goto 1;
1:		goto 2;
2:		if (0 != 0) { goto 3; }
		if (1 == 0) { goto 3; }
		if (1 != 0) { goto 4; }
		goto 3;
4:		if (0 == 0) { goto 6; }
		goto 3;
6:		if (reg0 != 0) { goto 8; }
		if (reg1 != 0) { goto 8; }
		if (reg2 != 0) { goto 8; }
		if (reg3 != 0) { goto 8; }
		if (reg4 != 0) { goto 8; }
		if (reg5 != 0) { goto 8; }
		if (reg6 != 0) { goto 8; }
		if (reg7 != 0) { goto 8; }
		reg0 = 1;
		if (reg0 == 0) { goto 9; }
		reg0 = 0;
		if (reg0 != 0) { goto 9; }
		reg0 = 1 + 1;
		if (reg0 != 0) { goto 10; }
		std::cout << "no add op\n";
		exit();
10:		reg1 = (reg0 == 2) ? 1 : 0;
		if (reg1 != 0) { goto 11; }
		std::cout << "no eq op\n";
		exit();
11:		stack.push(reg0);
		stack.push(reg1);
		reg0 = stack.pop();
		reg1 = stack.pop();
		reg2 = (reg1 == 2) ? 1 : 0;
		if (reg2 == 0) { goto 12; }
		reg2 = (reg0 == 1) ? 1 : 0;
		if (reg2 == 0) { goto 12; }
		reg2 = (reg1 > reg0) ? 1 : 0;
		if (reg2 == 0) { goto 13; }
		reg2 = (reg0 > reg1) ? 1 : 0;
		if (reg2 != 0) { goto 13; }
		reg2 = (42 > 42) ? 1 : 0;
		if (reg2 != 0) { goto 13; }
		reg0 = 28912 & 19626;
		reg1 = (reg0 == 16544) ? 1 : 0;
		if (reg1 == 0) { goto 14; }
		reg1 = 28912 | 19626;
		reg0 = (reg1 == 31994) ? 1 : 0;
		if (reg0 != 0) { goto 15; }
		std::cout << "no bitwise or\n";
101:	\
		exit();
15:		reg0 = ~0;
		reg1 = (reg0 == 32767) ? 1 : 0;
		if (reg1 == 0) { goto 16; }
		reg0 = ~21845;
		reg1 = (reg0 == 10922) ? 1 : 0;
		if (reg1 == 0) { goto 16; }
		fn0();
		goto 7;
5:		reg0 = stack.pop();
		reg1 = (reg0 == 708) ? 1 : 0;
		if (reg1 != 0) { goto 7; }
		reg1 = (reg0 == 706) ? 1 : 0;
		if (reg1 == 0) { goto 7; }
		reg0 = 1287;
		reg0();
		goto 7;
fn28:	reg0 = 54;
		if (reg1 == 0) { goto 161; }
		reg0 = 12345 * 32123;
		reg1 = (reg0 == 99) ? 1 : 0;
		if (reg1 == 0) { goto 162; }
		reg0 = 6 % 3;
		reg1 = (reg0 == 0) ? 1 : 0;
		if (reg1 == 0) { goto 163; }
		reg0 = 70 % 6;
		reg1 = (reg0 == 4) ? 1 : 0;
		if (reg1 == 0) { goto 163; }
		reg0 = 32766 * 15;
		reg1 = (reg0 == 32738) ? 1 : 0;
		if (reg1 == 0) { goto 162; }
		goto 164;
164:	reg0 = *(843);
		reg1 = (reg0 == 20000) ? 1 : 0;
		if (reg1 == 0) { goto 222; }
		reg2 = 843 + 1;
		reg0 = *(reg2);
		reg1 = (reg0 == 10000) ? 1 : 0;
		if (reg1 == 0) { goto 222; }
		reg0 = 843;
		*(reg0) = 30000;
		reg2 = *(reg0);
		reg1 = (reg2 == 30000) ? 1 : 0;
		if (reg1 == 0) { goto 223; }
		fn104();
		reg0 = *(6068);
		reg1 = (reg0 == 11) ? 1 : 0;
		if (reg1 == 0) { goto 222; }
		reg2 = 6068 + 1;
		reg0 = *(reg2);
		reg1 = (reg0 == 116) ? 1 : 0;
		if (reg1 == 0) { goto 222; }
		*(reg2) = 84;
		reg0 = *(reg2);
		reg1 = (reg0 == 116) ? 1 : 0;
		if (reg1 != 0) { goto 223; }
		reg1 = (reg0 == 84) ? 1 : 0;
		if (reg1 == 0) { goto 223; }
		*(937) = 21;
		*(938) = 7;
		goto 224;
224:	std::cout << "wmem opwrite fail\n";
		exit();
		reg1 = 10 + 6080;
		reg1 = reg1 + 1;
		reg2 = *(6116);
		reg2 = reg2 + 6116;
		reg0 = 6116;
		reg0 = reg0 + 1;
236:	reg3 = (reg0 > reg2) ? 1 : 0;
		if (reg3 != 0) { goto 235; }
		reg4 = *(reg0);
		*(reg1) = reg4;
		reg0 = reg0 + 1;
		reg1 = reg1 + 1;
		goto 236;
235:	reg0 = *(6080);
		reg1 = *(6099);
		reg0 = reg0 + reg1;
		reg0 = reg0 + 1;
		*(6080) = reg0;
		*(6099) = 44;
		reg0 = 6080;
		fn5();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 26851;
		reg1 = 1531;
		reg2 = 6971 + 686;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 42;
3:		std::cout << "no jt/jf\n";
		exit();
8:		std::cout << "nonzero reg\n";
		exit();
9:		std::cout << "no set op\n";
fn72:	
		exit();
13:		std::cout << "no gt op\n";
		exit();
12:		std::cout << "no stack\n";
		exit();
14:		std::cout << "no bitwise and\n";
		exit();
16:		std::cout << "no bitwise not\n";
		exit();
222:	std::cout << "no rmem op\n";
		exit();
223:	std::cout << "no wmem op\n";
		exit();
fn0:	goto 5;
7:		std::cout << "no call op\n";
		exit();
162:	std::cout << "no modulo math during add or mult\n";
fn40:	
		exit();
		std::cout << "not hitchhiking\n";
		exit();
161:	std::cout << "no mult op\n";
		exit();
163:	std::cout << "no mod op\n";
		exit();
fn1:	stack.push(reg0);
		stack.push(reg3);
		stack.push(reg4);
		stack.push(reg5);
		stack.push(reg6);
		reg6 = reg0;
		reg5 = reg1;
		reg4 = *(reg0);
		reg1 = 0;
18:		reg3 = 1 + reg1;
		reg0 = (reg3 > reg4) ? 1 : 0;
		if (reg0 != 0) { goto 17; }
		reg3 = reg3 + reg6;
		reg0 = *(reg3);
		reg5();
		reg1 = reg1 + 1;
		if (reg1 != 0) { goto 18; }
17:		reg6 = stack.pop();
		reg5 = stack.pop();
		reg4 = stack.pop();
		reg3 = stack.pop();
		reg0 = stack.pop();
		return;
fn5:	stack.push(reg1);
		reg1 = 1528;
		fn1();
		reg1 = stack.pop();
		return;
		std::cout << "reg0";
		return;
		stack.push(reg1);
		reg1 = reg2;
		fn2();
		std::cout << "reg0";
		reg1 = stack.pop();
		return;
fn3:	stack.push(reg1);
		stack.push(reg3);
		reg3 = *(reg0);
		if (reg3 == 0) { goto 19; }
		fn1();
		if (reg1 != 0) { goto 19; }
		reg0 = reg2;
		goto 20;
19:		reg0 = 32767;
20:		reg3 = stack.pop();
		reg1 = stack.pop();
		return;
fn8:	stack.push(reg1);
		stack.push(reg2);
		reg2 = reg1;
		reg1 = 1605;
		fn3();
		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
fn9:	stack.push(reg1);
		stack.push(reg2);
		reg2 = reg1;
		reg1 = 1648;
		fn3();
		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
		reg0 = (reg0 == reg2) ? 1 : 0;
		if (reg0 == 0) { goto 28; }
		reg2 = reg1;
		reg1 = 32767;
28:		return;
		stack.push(reg3);
		reg3 = reg2 + 1;
		reg3 = reg3 + reg1;
		reg3 = *(reg3);
		reg3 = (reg0 == reg3) ? 1 : 0;
206:	if (reg3 != 0) { goto 29; }
		reg2 = reg1;
		reg1 = 32767;
29:		reg3 = stack.pop();
		return;
		stack.push(reg1);
		reg1 = reg2;
		fn4();
		reg1 = stack.pop();
		if (reg0 == 0) { goto 30; }
		reg2 = reg1;
		reg1 = 32767;
30:		return;
fn4:	stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg4);
		reg3 = *(reg0);
		reg4 = *(reg1);
		reg2 = (reg3 == reg4) ? 1 : 0;
		if (reg2 == 0) { goto 31; }
		reg2 = reg3 | reg4;
		if (reg2 == 0) { goto 32; }
		reg2 = reg1;
		reg1 = 1619;
		fn1();
		if (reg1 == 0) { goto 31; }
32:		reg0 = 1;
		goto 33;
31:		reg0 = 0;
33:		reg4 = stack.pop();
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
fn104:	stack.push(reg0);
		stack.push(reg1);
		reg1 = 6068;
34:		reg0 = *(reg1);
		stack.push(reg1);
		reg1 = reg1 * reg1;
		fn2();
		reg1 = 16724;
		fn2();
		reg1 = stack.pop();
		*(reg1) = reg0;
		reg1 = reg1 + 1;
239:	reg0 = (30050 == reg1) ? 1 : 0;
		if (reg0 == 0) { goto 34; }
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn7:	stack.push(reg0);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg4);
		stack.push(reg5);
		reg2 = reg1 + reg0;
		reg0 = reg1;
		reg5 = 0;
36:		reg0 = reg0 + 1;
		reg3 = (reg0 > reg2) ? 1 : 0;
		if (reg3 != 0) { goto 35; }
		std::cin.get(reg4);
		reg3 = (reg4 == 10) ? 1 : 0;
		if (reg3 != 0) { goto 35; }
		*(reg0) = reg4;
		reg5 = reg5 + 1;
		goto 36;
35:		*(reg1) = reg5;
41:		reg3 = (reg4 == 10) ? 1 : 0;
		if (reg3 != 0) { goto 40; }
		std::cin.get(reg4);
		goto 41;
40:		reg5 = stack.pop();
		reg4 = stack.pop();
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg0 = stack.pop();
		return;
fn48:	stack.push(reg3);
		stack.push(reg4);
		stack.push(reg5);
		stack.push(reg6);
		reg6 = 1;
43:		reg4 = reg3 + reg6;
		reg4 = *(reg4);
		reg5 = 6125 + reg6;
		*(reg5) = reg4;
		reg6 = reg6 + 1;
		reg5 = *(6125);
		reg4 = (reg6 > reg5) ? 1 : 0;
		if (reg4 == 0) { goto 43; }
46:		reg3 = 0;
		reg4 = 0;
45:		reg5 = *(6125);
		reg5 = reg4 % reg5;
102:	
		reg5 = reg5 + 6125;
		reg5 = reg5 + 1;
		reg6 = *(reg5);
		reg6 = reg6 * 5249;
		reg6 = reg6 + 12345;
		*(reg5) = reg6;
		stack.push(reg0);
		stack.push(reg1);
		reg1 = reg6;
		fn2();
		reg6 = reg0;
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg5 = *(reg1);
		reg6 = reg6 % reg5;
		reg6 = reg6 + 1;
		reg5 = (reg6 > reg2) ? 1 : 0;
		if (reg5 != 0) { goto 44; }
		reg3 = 1;
44:		reg6 = reg6 + reg1;
		reg6 = *(reg6);
		reg4 = reg4 + 1;
		reg5 = reg4 + 6129;
		*(reg5) = reg6;
		reg5 = *(6129);
		reg5 = (reg4 == reg5) ? 1 : 0;
		if (reg5 == 0) { goto 45; }
		if (reg3 == 0) { goto 46; }
		stack.push(reg0);
		reg0 = 6129;
		fn5();
		reg0 = stack.pop();
		reg6 = stack.pop();
		reg5 = stack.pop();
		reg4 = stack.pop();
		reg3 = stack.pop();
		return;
fn15:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg4);
		stack.push(reg5);
		reg2 = 1;
		reg5 = 0;
61:		if (reg0 == 0) { goto 47; }
		reg4 = (reg2 == 10000) ? 1 : 0;
		reg3 = reg0;
		if (reg4 != 0) { goto 48; }
		reg1 = reg2 * 10;
		reg3 = reg0 % reg1;
48:		reg4 = 0;
		reg2 = reg2 * 32767;
50:		if (reg3 == 0) { goto 49; }
		reg4 = reg4 + 1;
		reg3 = reg3 + reg2;
		goto 50;
49:		reg2 = reg2 * 32767;
		reg3 = reg4 * reg2;
		reg3 = reg3 * 32767;
		reg0 = reg0 + reg3;
		reg4 = reg4 + 48;
		reg2 = reg2 * 10;
241:	
		reg5 = reg5 + 1;
		stack.push(reg4);
		goto 61;
47:		if (reg5 != 0) { goto 59; }
		std::cout << "0";
		goto 60;
59:		if (reg5 == 0) { goto 60; }
		reg0 = stack.pop();
		std::cout << "reg0";
		reg5 = reg5 + 32767;
		goto 59;
60:		reg5 = stack.pop();
		reg4 = stack.pop();
		reg3 = stack.pop();
fn91:	reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn2:	stack.push(reg1);
		stack.push(reg2);
		reg2 = reg0 & reg1;
		reg2 = ~reg2;
		reg0 = reg0 | reg1;
		reg0 = reg0 & reg2;
		reg2 = stack.pop();
		reg1 = stack.pop();
238:	return;
		reg0 = reg0 + reg1;
		reg1 = (reg1 > reg0) ? 1 : 0;
		return;
		stack.push(reg2);
		reg2 = (reg1 > reg0) ? 1 : 0;
		reg1 = reg1 * 32767;
		reg0 = reg0 + reg1;
		reg1 = reg2;
		reg2 = stack.pop();
		return;
		if (reg0 == 0) { goto 21; }
		if (reg1 == 0) { goto 21; }
		stack.push(reg2);
		stack.push(reg3);
		reg2 = (reg1 > reg0) ? 1 : 0;
		if (reg2 != 0) { goto 22; }
		reg2 = reg0;
		reg0 = reg1;
		reg1 = reg2;
22:		reg2 = reg0;
		reg0 = 0;
24:		reg0 = reg0 + reg1;
		reg3 = (reg1 > reg0) ? 1 : 0;
		if (reg3 != 0) { goto 23; }
		reg2 = reg2 + 32767;
		if (reg2 != 0) { goto 24; }
		reg1 = 0;
		goto 25;
23:		reg1 = 1;
25:		reg3 = stack.pop();
		reg2 = stack.pop();
		return;
21:		reg0 = 0;
		reg1 = 0;
		return;
fn84:	stack.push(reg1);
		stack.push(reg2);
27:		if (reg1 == 0) { goto 26; }
		reg1 = reg1 + 32767;
		reg2 = reg0 & 16384;
		reg0 = reg0 * 2;
		if (reg2 == 0) { goto 27; }
		reg0 = reg0 | 1;
		goto 27;
26:		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
fn83:	stack.push(reg1);
		reg1 = (reg0 > 14) ? 1 : 0;
		if (reg1 != 0) { goto 37; }
		reg1 = reg0;
		reg0 = 1;
39:		if (reg1 == 0) { goto 38; }
		reg1 = reg1 + 32767;
		reg0 = reg0 * 2;
		goto 39;
37:		reg0 = 32767;
38:		reg1 = stack.pop();
		return;
		goto 42;
fn42:	
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		if (10766 == 0) { goto 194; }
		exit();
		exit();
		exit();
		11288 = stack.pop();
		exit();
		0 = 11726;
		27143 = stack.pop();
		exit();
		27150 = 0 % 12199;
		fn92();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		14104 = 27205 * 27209;
		exit();
		exit();
		14765 = stack.pop();
		std::cin.get(16159);
		exit();
		fn93();
		stack.push(27317);
		exit();
		exit();
		exit();
		4720 = 18206 | 18220;
		exit();
		-
		18705 = stack.pop();
		18769 = 18780;
		return;
		18963 = 2478 + 5428;
		exit();
		exit();
		exit();
		exit();
		0 = 2 | reg0;
42:		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
65:		reg1 = *(2732);
		reg0 = *(2733);
		reg0 = (reg0 == reg1) ? 1 : 0;
		if (reg0 != 0) { goto 51; }
		reg0 = *(2732);
		reg0 = reg0 + 4;
		reg0 = *(reg0);
		if (reg0 == 0) { goto 51; }
		reg0();
51:		reg1 = *(2732);
		reg0 = *(2733);
		reg0 = (reg0 == reg1) ? 1 : 0;
		if (reg0 != 0) { goto 52; }
		reg0 = 25974;
		*(reg0) = 0;
		fn6();
52:		*(2733) = reg1;
		stack.push(reg0);
240:	
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 27414;
		reg1 = 1531;
		reg2 = 4394 + 9784;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = 32;
		reg1 = 25974;
		fn7();
		std::cout << "\n\n";
		reg0 = 25974;
		reg1 = 32;
		fn8();
		reg1 = (reg0 == 32767) ? 1 : 0;
		if (reg1 == 0) { goto 53; }
		reg0 = *(25974);
53:		reg2 = reg0;
		reg1 = *(25974);
		stack.push(reg1);
		*(25974) = reg2;
		reg0 = 27398;
		reg1 = 25974;
		fn9();
		reg1 = stack.pop();
		*(25974) = reg1;
		reg1 = (reg0 == 32767) ? 1 : 0;
		if (reg1 == 0) { goto 54; }
		reg0 = 0;
		reg2 = 0;
54:		reg1 = 27406 + 1;
		reg1 = reg1 + reg0;
		reg1 = *(reg1);
		reg3 = *(25974);
		reg3 = (reg3 == reg2) ? 1 : 0;
		if (reg3 != 0) { goto 55; }
		reg0 = reg2 * 32767;
		reg3 = *(25974);
		reg3 = reg0 + reg3;
		if (reg2 == 0) { goto 56; }
		reg3 = reg3 + 32767;
56:		reg3 = reg3 % 32;
		reg0 = 25974 + reg2;
		if (reg2 == 0) { goto 57; }
		reg0 = reg0 + 1;
57:		*(reg0) = reg3;
		goto 58;
55:		reg0 = 25974;
		*(reg0) = 0;
58:		reg1();
		if (reg1 != 0) { goto 65; }
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn6:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg1 = *(reg0);
		if (reg1 == 0) { goto 62; }
		fn10();
		if (reg0 == 0) { goto 63; }
		stack.push(reg0);
		fn11();
		reg1 = reg0;
		reg0 = stack.pop();
		if (reg1 == 0) { goto 63; }
		reg1 = reg0 + 1;
		reg0 = *(reg1);
		fn5();
		std::cout << "\n";
		goto 64;
63:		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 27432;
		reg1 = 1531;
		reg2 = 16241 + 1017;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 64;
62:		reg0 = *(2732);
		stack.push(reg0);
		std::cout << "== ";
		reg0 = reg0 + 0;
		reg0 = *(reg0);
		fn5();
		std::cout << " ==\n";
		reg0 = stack.pop();
		stack.push(reg0);
		reg0 = reg0 + 1;
		reg0 = *(reg0);
		reg1 = *(reg0);
		reg1 = (reg1 == 2) ? 1 : 0;
		if (reg1 == 0) { goto 66; }
		stack.push(reg0);
		reg0 = 2680;
		fn11();
		reg1 = reg0;
		reg0 = stack.pop();
		reg0 = reg0 + 1;
		reg0 = reg0 + reg1;
165:	
		reg0 = *(reg0);
66:		fn5();
		std::cout << "\n";
		reg0 = stack.pop();
		stack.push(reg0);
		fn12();
		if (reg0 == 0) { goto 67; }
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 27455;
		reg1 = 1531;
		reg2 = 442 + 13491;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg2 = *(2732);
		fn13();
67:		reg0 = stack.pop();
		stack.push(reg0);
		reg0 = reg0 + 2;
		reg0 = *(reg0);
		reg0 = *(reg0);
		reg2 = (reg0 == 1) ? 1 : 0;
		std::cout << "\nThere ";
		if (reg2 != 0) { goto 68; }
		std::cout << "are";
		goto 69;
68:		std::cout << "is ";
69:		\
		fn15();
		std::cout << " exit";
		reg2 = (reg0 == 1) ? 1 : 0;
		if (reg2 != 0) { goto 79; }
		std::cout << "s:\n";
79:		\
		reg0 = stack.pop();
		stack.push(reg0);
		reg0 = reg0 + 2;
		reg0 = *(reg0);
		reg1 = 5814;
		fn1();
		reg0 = stack.pop();
64:		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg1 = reg0;
		reg0 = *(2732);
		reg0 = reg0 + 2;
		reg0 = *(reg0);
		fn9();
		reg2 = (reg0 == 32767) ? 1 : 0;
		if (reg2 != 0) { goto 74; }
		reg2 = *(2732);
		reg2 = reg2 + 3;
		reg2 = *(reg2);
		reg2 = reg2 + 1;
		reg2 = reg2 + reg0;
		reg2 = *(reg2);
		*(2732) = reg2;
		*(2733) = 0;
		goto 75;
74:		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 27482;
		reg1 = 1531;
		reg2 = 8543 + 6288;
fn18:	fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
75:		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 27532;
		reg1 = 1531;
		reg2 = 17320 + 2236;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
fn44:	
		stack.push(reg2);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28037;
		reg1 = 1531;
		reg2 = 256 + 31843;
111:	
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg2 = 0;
		fn13();
		reg2 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
99:		stack.push(reg1);
		stack.push(reg2);
		fn10();
		if (reg0 == 0) { goto 93; }
		reg1 = reg0 + 2;
		reg0 = *(reg1);
		reg2 = *(2732);
		reg2 = (reg0 == reg2) ? 1 : 0;
		if (reg2 == 0) { goto 93; }
		*(reg1) = 0;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28054;
		reg1 = 1531;
		reg2 = 26230 + 1797;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 94;
93:		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28062;
		reg1 = 1531;
		reg2 = 1841 + 77;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
94:		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		fn10();
		if (reg0 == 0) { goto 176; }
		reg1 = reg0 + 2;
		reg0 = *(reg1);
		if (reg0 != 0) { goto 176; }
		reg0 = *(2732);
		*(reg1) = reg0;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28090;
		reg1 = 1531;
		reg2 = 111 + 16;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 177;
176:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
148:	reg0 = 28100;
		reg1 = 1531;
		reg2 = 11541 + 1228;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
177:	reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		fn10();
		if (reg0 == 0) { goto 218; }
		reg1 = reg0 + 2;
		reg1 = *(reg1);
		if (reg1 != 0) { goto 218; }
		reg1 = reg0 + 3;
		reg1 = *(reg1);
		if (reg1 == 0) { goto 219; }
		reg1();
		goto 220;
218:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28135;
		reg1 = 1531;
		reg2 = 2742 + 449;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 220;
219:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28170;
		reg1 = 1531;
		reg2 = 283 + 30544;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
220:	reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 2680;
		fn11();
		if (reg0 != 0) { goto 234; }
		reg0 = 2676 + 2;
		*(reg0) = 32767;
		reg0 = 2680 + 2;
		*(reg0) = 32767;
		reg0 = 2672 + 2;
		*(reg0) = 32767;
		*(2732) = 2648;
234:	reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28204;
		reg1 = 1531;
		reg2 = 818 + 8249;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		exit();
		exit();
fn109:	stack.push(reg1);
		reg1 = *(3726);
		reg1 = reg1 | reg0;
		*(3726) = reg1;
		reg1 = stack.pop();
		return;
		*(3726) = 0;
		return;
		stack.push(reg0);
		reg0 = 1;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 2;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 4;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 8;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 16;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 32;
		fn109();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		reg0 = 64;
		fn109();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28236;
		reg1 = 1531;
		reg2 = 1395 + 1791;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = *(3726);
		reg1 = 25866;
		reg2 = 32767;
		reg3 = 28299;
		fn48();
fn73:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28303;
		reg1 = 1531;
		reg2 = 6874 + 9876;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2732) = 2417;
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = *(2462);
fn63:	
		reg1 = *(27101);
		reg0 = (reg0 == reg1) ? 1 : 0;
		if (reg0 != 0) { goto 155; }
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28347;
		reg1 = 1531;
		reg2 = 6321 + 10569;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2732) = 2457;
		*(2733) = 2457;
155:	reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2;
		reg1 = 0;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 8;
		reg1 = 1;
		fn76();
fn27:	reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 1;
		reg1 = 2;
		fn75();
		reg1 = stack.pop();
fn59:	
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 1;
		reg1 = 3;
		fn76();
		fn77();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 4;
		reg1 = 4;
		fn76();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2;
		reg1 = 5;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 11;
		reg1 = 6;
		fn76();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2;
		reg1 = 7;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 0;
		reg1 = 8;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 4;
		reg1 = 9;
		fn76();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 1;
		reg1 = 10;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 18;
		reg1 = 11;
		fn76();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		fn78();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 1;
		reg1 = 12;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 9;
		reg1 = 13;
		fn76();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2;
		reg1 = 14;
		fn75();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn75:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg2 = 2716 + 2;
		reg2 = *(reg2);
		if (reg2 != 0) { goto 156; }
		fn79();
		*(3951) = reg0;
		reg1 = reg0 + 3945;
		reg1 = *(reg1);
		reg0 = 26024;
		fn5();
		reg0 = reg1;
		fn5();
		reg0 = 26088;
		fn5();
		reg0 = reg1;
184:	
		fn5();
		std::cout << ".\n";
		std::cout << "\n";
156:	reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn76:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg2 = 2716 + 2;
		reg2 = *(reg2);
		if (reg2 != 0) { goto 157; }
		fn79();
		stack.push(reg0);
		reg0 = *(3951);
		reg1 = reg0 + 3945;
		reg1 = *(reg1);
		reg0 = 26122;
		fn5();
		reg0 = reg1;
		fn5();
		reg0 = 26170;
		fn5();
		reg0 = stack.pop();
		reg1 = reg0;
		reg0 = *(3952);
		reg2 = *(3951);
		reg2 = reg2 + 3948;
172:	
		reg2 = *(reg2);
		reg2();
		if (reg1 != 0) { goto 158; }
		reg1 = *(3952);
		*(3952) = reg0;
		reg2 = (reg0 > reg1) ? 1 : 0;
		if (reg2 == 0) { goto 159; }
		stack.push(reg0);
		reg0 = 26235;
		fn5();
		reg0 = stack.pop();
159:	reg2 = (reg1 > reg0) ? 1 : 0;
		if (reg2 == 0) { goto 160; }
		stack.push(reg0);
		reg0 = 26267;
		fn5();
		reg0 = stack.pop();
160:	std::cout << "\n\n";
		goto 157;
158:	fn82();
		reg0 = 26299;
		fn5();
157:	reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn79:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg4);
		stack.push(reg5);
		reg5 = *(3953);
		reg3 = (reg5 > 29999) ? 1 : 0;
		if (reg3 != 0) { goto 168; }
		reg5 = reg5 + 1;
fn39:	
		*(3953) = reg5;
168:	reg3 = reg0;
		reg4 = reg1;
		reg0 = reg5 + 2;
		fn83();
		reg1 = *(3954);
		reg0 = reg1 | reg0;
		reg1 = reg4;
		fn84();
		*(3954) = reg0;
		reg0 = 3955;
		reg1 = reg5 + 2;
		reg2 = reg4;
		fn85();
		reg0 = 3956;
		reg1 = reg5 * reg5;
		reg2 = reg4 * reg4;
		fn85();
		reg0 = 3957;
		reg1 = 13;
		reg2 = reg3 * 9;
		reg2 = reg2 * reg2;
		fn85();
		reg5 = stack.pop();
		reg4 = stack.pop();
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn85:	stack.push(reg0);
		reg0 = *(reg0);
		fn84();
		reg1 = reg2;
		fn2();
		reg1 = stack.pop();
		*(reg1) = reg0;
		return;
fn77:	stack.push(reg0);
		reg0 = 2716 + 2;
		reg0 = *(reg0);
		if (reg0 != 0) { goto 169; }
		reg0 = 26321;
		fn5();
		reg0 = *(3952);
		reg0 = (reg0 == 30) ? 1 : 0;
		if (reg0 != 0) { goto 170; }
		reg0 = 26354;
		fn5();
180:	reg0 = 26398;
		fn5();
		fn82();
		goto 169;
170:	reg0 = 26440;
		fn5();
		reg0 = *(3954);
		reg0 = reg0 + 1;
		if (reg0 != 0) { goto 179; }
		reg0 = 26484;
		fn5();
		goto 180;
179:	reg0 = 26584;
		fn5();
		reg0 = 2716 + 2;
		*(reg0) = 32767;
169:	reg0 = stack.pop();
		return;
fn78:	stack.push(reg0);
		reg0 = 2716 + 2;
		reg0 = *(reg0);
fn46:	exit();
		if (reg0 != 0) { goto 199; }
		reg0 = 26717;
		fn5();
		reg0 = *(2732);
fn100:	
		reg0 = (reg0 == 2623) ? 1 : 0;
		if (reg0 != 0) { goto 200; }
		reg0 = 26725;
		fn5();
		goto 201;
200:	reg0 = 26731;
		fn5();
201:	reg0 = 26737;
		fn5();
110:	fn82();
199:	reg0 = stack.pop();
		return;
fn82:	stack.push(reg0);
		*(3952) = 22;
		*(3953) = 0;
		*(3954) = 0;
		*(3955) = 0;
		*(3956) = 0;
		*(3957) = 0;
		reg0 = 2716 + 2;
		*(reg0) = 2623;
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 2716 + 2;
		reg0 = *(reg0);
		reg0 = (reg0 == 32767) ? 1 : 0;
		if (reg0 != 0) { goto 191; }
		reg0 = 26824;
		fn5();
		*(2732) = 2578;
		*(2733) = 2578;
191:	reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28369;
		reg1 = 1531;
		reg2 = 1469 + 1978;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = 4242;
		reg1 = 25866;
		reg2 = 32767;
		reg3 = 28397;
		fn48();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28401;
		reg1 = 1531;
		reg2 = 14355 + 15467;
216:	fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 2672 + 2;
		reg0 = *(reg0);
		if (reg0 != 0) { goto 192; }
		reg0 = 2684 + 2;
		*(reg0) = 32767;
		reg0 = 2672 + 2;
		*(reg0) = 32767;
		reg0 = 2676 + 2;
		*(reg0) = 0;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28453;
		reg1 = 1531;
		reg2 = 1608 + 2591;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 193;
192:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28510;
		reg1 = 1531;
		reg2 = 99 + 17;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
193:	reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 2676 + 2;
		*(reg0) = 32767;
		reg0 = 2680 + 2;
		*(reg0) = 0;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28569;
		reg1 = 1531;
		reg2 = 11455 + 442;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2733) = 0;
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		reg0 = 2676 + 2;
		*(reg0) = 0;
		reg0 = 2680 + 2;
		*(reg0) = 32767;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28595;
		reg1 = 1531;
		reg2 = 17821 + 5581;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2733) = 0;
		reg0 = stack.pop();
		return;
fn47:	stack.push(reg2);
		stack.push(reg3);
		reg2 = *(2732);
		reg2 = (reg2 == 2457) ? 1 : 0;
		if (reg2 != 0) { goto 202; }
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28621;
		reg1 = 1531;
		reg2 = 6787 + 497;
97:		
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 178;
202:	reg2 = reg0 + 2;
		*(reg2) = 32767;
		reg2 = *(2462);
		reg2 = reg2 + 27095;
		reg2 = reg2 + 1;
		reg2 = *(reg2);
		reg3 = 2457 + 1;
		reg3 = *(reg3);
		reg3 = reg3 + reg2;
		reg2 = reg1 + 48;
		*(reg3) = reg2;
		reg2 = *(2462);
		reg2 = reg2 + 27101;
		reg2 = reg2 + 1;
		*(reg2) = reg1;
		stack.push(reg0);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28664;
		reg1 = 1531;
		reg2 = 110 + 392;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = stack.pop();
		stack.push(reg0);
		reg2 = reg0 + 0;
		reg0 = *(reg2);
		fn5();
		reg0 = stack.pop();
		stack.push(reg0);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28679;
		reg1 = 1531;
		reg2 = 2616 + 2882;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = stack.pop();
		reg2 = *(2462);
		reg2 = reg2 + 1;
		*(2462) = reg2;
		reg3 = *(27101);
		reg3 = (reg2 == reg3) ? 1 : 0;
		if (reg3 == 0) { goto 178; }
		reg0 = 0;
		reg1 = 27101 + 1;
		reg1 = *(reg1);
		reg0 = reg0 + reg1;
		reg1 = 27101 + 2;
		reg1 = *(reg1);
		reg2 = 27101 + 3;
		reg2 = *(reg2);
		reg2 = reg2 * reg2;
		reg1 = reg1 * reg2;
		reg0 = reg0 + reg1;
		reg1 = 27101 + 4;
		reg1 = *(reg1);
		reg2 = reg1 * reg1;
		reg2 = reg2 * reg1;
		reg0 = reg0 + reg2;
		reg1 = 27101 + 5;
		reg1 = *(reg1);
		reg1 = reg1 * 32767;
		reg0 = reg0 + reg1;
		reg1 = (reg0 == 399) ? 1 : 0;
		if (reg1 != 0) { goto 231; }
		reg2 = 2688 + 2;
		*(reg2) = 2457;
		reg2 = 2692 + 2;
		*(reg2) = 2457;
		reg2 = 2696 + 2;
		*(reg2) = 2457;
		reg2 = 2700 + 2;
		*(reg2) = 2457;
		reg2 = 2704 + 2;
		*(reg2) = 2457;
		*(2462) = 0;
208:	
		reg0 = 27095;
		reg1 = 5341;
		fn1();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28710;
		reg1 = 1531;
		reg2 = 10078 + 4510;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 178;
231:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28777;
		reg1 = 1531;
		reg2 = 6088 + 2230;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
178:	reg3 = stack.pop();
		reg2 = stack.pop();
		return;
		stack.push(reg2);
		reg2 = 2457 + 1;
		reg2 = *(reg2);
		reg2 = reg2 + reg0;
		*(reg2) = 95;
		reg2 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2688;
		reg1 = 2;
		fn47();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2692;
		reg1 = 3;
		fn47();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2696;
fn19:	
		reg1 = 5;
		fn47();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2700;
		reg1 = 7;
		fn47();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		reg0 = 2704;
		reg1 = 9;
		fn47();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		if (reg7 == 0) { goto 127; }
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 28844;
		reg1 = 1531;
		reg2 = 5779 + 14174;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		-
		-
		-
		-
		-
		reg0 = 4;
		reg1 = 1;
		fn16();
		reg1 = (reg0 == 6) ? 1 : 0;
		if (reg1 == 0) { goto 128; }
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29014;
		reg1 = 1531;
		reg2 = 6929 + 15196;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = reg7;
		reg1 = 25866;
		reg2 = 32767;
		stack.push(reg3);
		reg3 = 29241;
		fn48();
		reg3 = stack.pop();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29245;
		reg1 = 1531;
		reg2 = 23693 + 618;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2732) = 2498;
		*(2733) = 0;
		reg1 = 2708 + 2;
		*(reg1) = 32767;
		goto 129;
128:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29400;
		reg1 = 1531;
		reg2 = 3192 + 16378;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		goto 129;
127:	stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29545;
		reg1 = 1531;
		reg2 = 4031 + 25407;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = 0;
		reg2 = 1 + 27101;
181:	reg1 = *(reg2);
		reg0 = reg0 + reg1;
		reg0 = reg0 * 31660;
		fn2();
		reg1 = *(27101);
		reg1 = reg1 + 27101;
		reg2 = reg2 + 1;
		reg1 = (reg2 > reg1) ? 1 : 0;
		if (reg1 == 0) { goto 181; }
		reg1 = 25866;
		reg2 = 32767;
		stack.push(reg3);
		reg3 = 29663;
		fn48();
		reg3 = stack.pop();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29667;
125:	
		reg1 = 1531;
		reg2 = 660 + 1631;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		*(2732) = 2488;
		*(2733) = 0;
		goto 129;
129:	reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		stack.push(reg3);
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29757;
		reg1 = 1531;
		reg2 = 17913 + 366;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg0 = *(3955);
		reg1 = *(3956);
		fn2();
		reg1 = *(3957);
		fn2();
		reg1 = 25919;
		reg2 = 4;
		stack.push(reg3);
		reg3 = 29942;
		fn48();
138:	
		reg3 = stack.pop();
		stack.push(reg0);
		stack.push(reg1);
		stack.push(reg2);
		reg0 = 29946;
		reg1 = 1531;
		reg2 = 6687 + 9035;
		fn1();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		reg3 = stack.pop();
		reg2 = stack.pop();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
fn14:	std::cout << "- ";
		fn5();
		std::cout << "\n";
		return;
fn12:	stack.push(reg1);
		stack.push(reg2);
		reg0 = 27381;
		reg1 = 5846;
		reg2 = 0;
		fn1();
		reg0 = reg2;
		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
		stack.push(reg3);
		stack.push(reg4);
		reg3 = *(2732);
		reg4 = reg0 + 2;
		reg4 = *(reg4);
		reg3 = (reg3 == reg4) ? 1 : 0;
		if (reg3 == 0) { goto 76; }
		reg2 = reg2 + 1;
76:		reg4 = stack.pop();
		reg3 = stack.pop();
		return;
fn13:	stack.push(reg0);
		stack.push(reg1);
		reg0 = 27381;
		reg1 = 5893;
		fn1();
		reg1 = stack.pop();
		reg0 = stack.pop();
		return;
		stack.push(reg3);
		reg3 = reg0 + 2;
		reg3 = *(reg3);
		reg3 = (reg2 == reg3) ? 1 : 0;
		if (reg3 == 0) { goto 77; }
		reg0 = reg0 + 0;
		reg0 = *(reg0);
		fn14();
77:		reg3 = stack.pop();
		return;
fn10:	stack.push(reg1);
		stack.push(reg2);
		reg2 = reg0;
		reg0 = 27381;
		reg1 = 5964;
		fn3();
		reg1 = (reg0 == 32767) ? 1 : 0;
		if (reg1 != 0) { goto 70; }
		reg1 = 27381 + reg0;
		reg1 = reg1 + 1;
		reg0 = *(reg1);
		goto 71;
70:		reg0 = 0;
71:		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
		stack.push(reg1);
		reg1 = reg2;
		reg0 = reg0 + 0;
		reg0 = *(reg0);
		fn4();
		reg1 = stack.pop();
		if (reg0 == 0) { goto 78; }
		reg2 = reg1;
		reg1 = 32767;
78:		return;
fn11:	stack.push(reg1);
		stack.push(reg2);
		reg0 = reg0 + 2;
		reg0 = *(reg0);
		if (reg0 == 0) { goto 72; }
		reg1 = *(2732);
		reg1 = (reg0 == reg1) ? 1 : 0;
		if (reg1 != 0) { goto 72; }
		reg0 = 0;
		goto 73;
72:		reg0 = 1;
73:		reg2 = stack.pop();
		reg1 = stack.pop();
		return;
fn16:	if (reg0 != 0) { goto 80; }
		reg0 = reg1 + 1;
		return;
80:		if (reg1 != 0) { goto 81; }
		reg0 = reg0 + 32767;
		reg1 = reg7;
		fn16();
		return;
81:		stack.push(reg0);
		reg1 = reg1 + 32767;
		fn16();
		reg1 = reg0;
		reg0 = stack.pop();
		reg0 = reg0 + 32767;
		fn16();
		return;
		25529 = stack.pop();
		7552 = (19815 == 31473) ? 1 : 0;
146:	
		*(23531) = 2949;
		*(31188) = 10545;
		26588 = 6057 & 18228;
		*(4213) = 16468;
		16660 = (29029 > 8560) ? 1 : 0;
		std::cout << "16699";
		1701 = *(14030);
		std::cin.get(30436);
		*(18017) = 31099;
		23298 = 2618 * 15653;
		std::cin.get(25456);
		std::cin.get(29300);
		32689 = ~11999;
		22949 = (2861 == 15027) ? 1 : 0;
		fn17();
		fn18();
		-
		5084 = 17846;
		fn19();
		fn20();
fn36:	
		exit();
		24246 = 4310 & 17712;
fn45:	
		-
		-
		if (10709 == 0) { goto 82; }
		-
		20540 = 661;
		*(13425) = 27004;
		exit();
		*(6452) = 19057;
		exit();
fn87:	
		19105 = 32728 + 13152;
		-
		std::cin.get(26544);
		*(1998) = 15269;
		8437 = 21614 % 2048;
		16326 = 29600 & 10036;
		*(120) = 13717;
		14660 = 28013 | 8561;
		exit();
fn101:	
		26751 = 7197;
		return;
		stack.push(18598);
		27829 = (8993 == 22509) ? 1 : 0;
		std::cout << "16004";
		*(4300) = 18343;
		return;
		21954 = 2212 + 16249;
119:	
		-
		std::cin.get(29184);
		if (8872 == 0) { goto 83; }
		17901 = (31532 == 11960) ? 1 : 0;
203:	
		18316 = (32119 == 12512) ? 1 : 0;
122:	
		*(7628) = 21476;
		15615 = *(29253);
		27607 = 8608 + 22324;
		std::cin.get(24614);
		exit();
		13118 = stack.pop();
		*(29024) = 10093;
		if (3193 != 0) { goto 84; }
		fn21();
		3759 = 17614 & 32048;
		-
		return;
		std::cout << "19127";
		23395 = (4141 > 18133) ? 1 : 0;
		*(4192) = 18786;
		exit();
		23 = (14644 > 28274) ? 1 : 0;
		fn22();
		-
		6103 = 20384 + 1848;
147:	
		if (28930 != 0) { goto 85; }
		18757 = (369 == 14707) ? 1 : 0;
		exit();
		29593 = (11235 > 25188) ? 1 : 0;
		13476 = (28458 == 10170) ? 1 : 0;
		26356 = *(8469);
		*(28710) = 10459;
		*(32356) = 14694;
		exit();
		18740 = (105 == 15185) ? 1 : 0;
		629 = stack.pop();
		*(19432) = 1377;
		12781 = (27436 == 8892) ? 1 : 0;
		17365 = (32229 > 14199) ? 1 : 0;
		std::cin.get(8231);
		*(14194) = 29041;
		8054 = (22884 == 4924) ? 1 : 0;
		22289 = stack.pop();
		if (16037 == 0) { goto 86; }
		-
		if (5040 == 0) { goto 87; }
		-
		667 = 16248 + 30779;
		22982 = 4768 & 20326;
		std::cin.get(20596);
		*(27750) = 10613;
188:	std::cout << "7957";
		return;
		22907 = 4713 & 20293;
		*(9854) = 25417;
		464 = 15021 % 30224;
		10912 = stack.pop();
		-
		-
		std::cout << "29060";
		22815 = 5409 & 20785;
		if (8571 == 0) { goto 88; }
		4580 = stack.pop();
		std::cout << "8383";
		7856 = ~23874;
		stack.push(1472);
		stack.push(6468);
		4867 = (20030 == 3365) ? 1 : 0;
		15418 = 31525 | 13949;
		-
		*(7756) = 24036;
		if (740 == 0) { goto 89; }
		-
fn81:	
215:	
		fn23();
		-
		if (7106 == 0) { goto 90; }
		29557 = (12645 > 27868) ? 1 : 0;
fn33:	
		if (24692 != 0) { goto 91; }
		21831 = 4973 | 20861;
		goto 92;
fn20:	
		12666 = 28529 & 11615;
		10661 = 26589 | 9699;
		if (28328 == 0) { goto 130; }
		25505 = 8671 % 24158;
		std::cin.get(5801);
		1250 = stack.pop();
		14365 = 30337 & 14128;
		7029 = (22583 > 5845) ? 1 : 0;
		*(4152) = 20172;
		2898 = 18528 | 2356;
		exit();
		fn52();
		14336 = (31034 > 13902) ? 1 : 0;
		-
		-
		*(5622) = 21857;
		-
		-
91:		
		return;
		*(1018) = 17305;
		std::cin.get(16435);
		-
174:	
		16692 = stack.pop();
132:	
		18093 = 1737;
		-
		return;
		*(2791) = 19837;
fn57:	
		14885 = (32065 == 15406) ? 1 : 0;
		18017 = (2403 == 18528) ? 1 : 0;
		4713 = 21789;
		if (16289 != 0) { goto 131; }
		-
		29663 = stack.pop();
		goto 132;
fn105:	
		*(20596) = 4805;
		9652 = 26268 | 11235;
		return;
		2725 = 20431 + 4987;
		if (10212 == 0) { goto 237; }
		return;
		*(39) = 17794;
		6481 = 23927 | 8561;
		24942 = (9568 == 26896) ? 1 : 0;
		goto 238;
104:	
		*(22565) = 7957;
		std::cin.get(23159);
fn51:	
		fn40();
		goto 118;
175:	
		18161 = 4422 | 22567;
		10066 = 28272 | 14688;
		4642 = 23857 + 9341;
		24496 = ~9889;
		*(31172) = 17322;
		-
		*(27604) = 13794;
		1303 = (20264 == 6502) ? 1 : 0;
		11583 = (30496 == 16756) ? 1 : 0;
		std::cin.get(29794);
		32438 = 18646 & 5424;
145:	
fn95:	
		stack.push(22670);
		25343 = *(12098);
		14807 = 672 & 20282;
		31597 = (17450 > 3781) ? 1 : 0;
		20596 = 6854;
		4934 = 23648 | 10611;
		exit();
		2092 = (21808 == 7732) ? 1 : 0;
		fn103();
		*(14429) = 1445;
		*(17968) = 4952;
		if (9890 == 0) { goto 217; }
		std::cout << "18336";
232:	
		22840 = 9528;
		8551 = 27941 & 14673;
		20904 = 7580 | 27106;
		22244 = (8924 > 29043) ? 1 : 0;
		*(7921) = 28028;
		26253 = (13681 == 421) ? 1 : 0;
		std::cout << "32501";
		26069 = 12477;
153:	
		19296 = (5677 > 25301) ? 1 : 0;
		13059 = (32313 == 19812) ? 1 : 0;
		fn101();
		stack.push(17078);
		goto 207;
fn30:	
		1706 = 22234 & 10613;
		if (2985 == 0) { goto 182; }
		exit();
		std::cin.get(24356);
		19867 = 7389 | 28602;
		25387 = 12834 % 1309;
		15837 = (3245 > 24091) ? 1 : 0;
		stack.push(29361);
		32704 = 20186 + 8277;
		-
		*(20933) = 9125;
		17584 = ~5719;
		stack.push(21392);
135:	
		21791 = 10042 | 31031;
		20849 = 9062;
		*(1072) = 22090;
85:		
		24235 = *(12495);
		-
		if (29622 == 0) { goto 151; }
		21237 = *(10070);
		exit();
fn80:	
		exit();
		fn73();
		17408 = stack.pop();
		26032 = 13970 | 2992;
		22133 = stack.pop();
		*(26590) = 15271;
		if (32710 == 0) { goto 152; }
185:	
		*(38) = 21968;
		18719 = 7482;
		3345 = stack.pop();
		fn74();
		19332 = (8162 > 29284) ? 1 : 0;
		7821 = stack.pop();
		5589 = (26853 > 16227) ? 1 : 0;
		if (21317 != 0) { goto 153; }
		goto 154;
fn31:	
		-
		1020 = 22974 + 12140;
196:	
		stack.push(24636);
		29053 = 18291;
fn102:	
		if (3766 == 0) { goto 167; }
		-
		fn81();
		2709 = 25447 + 14369;
		*(28791) = 18811;
		30493 = 19555 * 9572;
		std::cin.get(10279);
		14715 = stack.pop();
		std::cin.get(7806);
fn17:	
		fn41();
		*(15844) = 5498;
		13713 = stack.pop();
		-
		870 = (23338 > 12511) ? 1 : 0;
		-
		fn42();
		375 = (22890 == 12610) ? 1 : 0;
		24972 = 14744 | 4593;
fn37:	
		exit();
		stack.push(26278);
		11180 = 972 * 23108;
		exit();
		fn43();
		9904 = (339 == 22561) ? 1 : 0;
		28115 = 17568 & 7988;
		1860 = 24101 * 14695;
		exit();
		-
		18801 = 8229 % 31569;
		std::cin.get(16996);
		8107 = 30349 + 20563;
		return;
130:	
		9497 = 32547 | 22819;
		4467 = 27429 % 17753;
		5240 = 28242;
		std::cout << "3402";
		16032 = 6348 & 30053;
		5047 = *(27964);
		24329 = 14445 + 5430;
		17824 = 7826 | 31742;
		10920 = 1949;
		1963 = (24792 == 15376) ? 1 : 0;
		6429 = 29992 * 20836;
fn90:	
		std::cin.get(24291);
		-
		goto 120;
121:	
204:	
		*(9150) = 242;
		23212 = ~15183;
fn98:	
		std::cin.get(22455);
		17245 = (9009 > 144) ? 1 : 0;
		std::cin.get(16445);
		272 = stack.pop();
		277 = 24941 | 16695;
		exit();
		917 = (25580 > 16951) ? 1 : 0;
		std::cout << "27816";
fn66:	
		*(29889) = 22443;
		return;
		-
		if (7582 == 0) { goto 198; }
120:	
		15124 = 6765 % 32048;
		-
		2407 = 26720 % 19216;
		*(21040) = 13641;
		23966 = (15586 > 7734) ? 1 : 0;
		if (27294 == 0) { goto 195; }
		fn94();
		std::cin.get(26891);
		*(10933) = 3125;
		31639 = (23921 == 15584) ? 1 : 0;
		14647 = 7037 & 32041;
		fn50();
		*(9264) = 1608;
		std::cin.get(13027);
		-
		if (18880 == 0) { goto 196; }
		12037 = 4159 * 30052;
		13325 = (6417 == 31350) ? 1 : 0;
		goto 197;
100:	
fn97:	
		23399 = (16433 > 9941) ? 1 : 0;
		return;
		exit();
		*(15920) = 10079;
		stack.push(15010);
		if (9611 != 0) { goto 111; }
		if (30967 == 0) { goto 112; }
		12612 = 6509 | 369;
		fn36();
		std::cin.get(4220);
		21393 = (15277 > 8759) ? 1 : 0;
		27620 = ~21442;
		-
		1784 = 29008 + 22644;
		26489 = 20086 | 14712;
		2846 = (29225 == 23985) ? 1 : 0;
		12088 = 5680 + 372;
		if (24133 != 0) { goto 113; }
		*(25187) = 19741;
		4768 = stack.pop();
		*(7153) = 1404;
		13192 = stack.pop();
		if (21312 != 0) { goto 114; }
		*(8308) = 3043;
		*(1860) = 29047;
		goto 115;
166:	
		21430 = 15812 * 9796;
		if (4540 == 0) { goto 225; }
		26018 = 19970 & 14487;
fn74:	
		fn100();
		294 = 27194;
		goto 206;
107:	
		if (22244 == 0) { goto 183; }
		std::cin.get(15265);
		*(32489) = 28029;
		if (9616 == 0) { goto 184; }
		-
		stack.push(8228);
		stack.push(31232);
187:	
		stack.push(10876);
		17059 = (12757 == 8036) ? 1 : 0;
		20421 = stack.pop();
		*(1482) = 29601;
		19632 = 14935 + 10278;
		if (15298 == 0) { goto 185; }
		if (24692 != 0) { goto 186; }
		11522 = 6969 * 2348;
		*(12640) = 8045;
		std::cin.get(31868);
		11937 = 7325;
		-
		4216 = (32405 > 28657) ? 1 : 0;
		11089 = 6249 | 2400;
		26399 = 21560 | 17699;
		fn89();
		20088 = 16216;
fn54:	
fn41:	
		26879 = (22592 == 18470) ? 1 : 0;
		4389 = (289 == 29053) ? 1 : 0;
		20805 = stack.pop();
		1764 = (30428 > 27006) ? 1 : 0;
		if (2992 == 0) { goto 171; }
		std::cin.get(7405);
		if (8234 == 0) { goto 172; }
		6003 = 1636 | 31074;
		exit();
		15656 = 11326 & 7999;
		fn86();
		exit();
		29304 = 25940;
		29352 = 26065 & 22320;
		fn87();
		stack.push(27530);
		stack.push(8245);
		*(5395) = 1829;
		fn88();
		*(10073) = 6572;
		12423 = 8896 + 5991;
		10709 = 6839 + 3955;
		20596 = 17089;
		20252 = stack.pop();
		6502 = (2666 == 32581) ? 1 : 0;
		*(19390) = 15602;
		*(18370) = 15266;
		16337 = (13233 > 10036) ? 1 : 0;
		*(116) = 30147;
		8478 = *(5425);
		27917 = (24957 == 21878) ? 1 : 0;
		*(15711) = 12715;
		goto 173;
fn43:	
		10355 = 8155 | 5396;
		7391 = 4750 + 2223;
		9561 = 7019 | 4404;
		32080 = (29482 == 26934) ? 1 : 0;
		3170 = 594;
fn49:	
		16276 = (13794 > 10795) ? 1 : 0;
205:	
		-
		fn69();
		3269 = stack.pop();
		-
		400 = ~30369;
		std::cout << "8724";
		*(4149) = 1734;
		if (11304 != 0) { goto 145; }
		309 = stack.pop();
		19231 = 16394 + 14694;
fn96:	
		-
		14308 = 11461 + 9297;
		std::cout << "5508";
		std::cin.get(22782);
		26917 = (24865 == 22831) ? 1 : 0;
		2315 = (378 > 31084) ? 1 : 0;
		return;
		*(4854) = 3445;
		std::cin.get(29923);
		22205 = (20785 == 18933) ? 1 : 0;
		stack.push(6853);
		*(31961) = 30636;
		std::cin.get(26339);
		-
		11715 = (9445 == 8053) ? 1 : 0;
244:	
		return;
		exit();
		stack.push(8813);
		return;
		-
		return;
		fn70();
		if (7246 != 0) { goto 146; }
		if (8251 != 0) { goto 147; }
		*(30564) = 28980;
		25873 = 24383 + 22819;
		std::cin.get(5888);
136:	
		24725 = 23236 + 22375;
		if (5032 == 0) { goto 148; }
		*(201) = 32123;
114:	
		31600 = (29738 > 28383) ? 1 : 0;
		*(3637) = 2869;
		22836 = stack.pop();
		10922 = (10202 == 9008) ? 1 : 0;
		return;
		12768 = (11623 == 9962) ? 1 : 0;
		fn71();
		9485 = (8561 == 7461) ? 1 : 0;
		*(31716) = 30660;
		std::cin.get(7934);
		1477 = stack.pop();
		exit();
		6466 = *(5124);
		3617 = (3376 > 2173) ? 1 : 0;
		29995 = (28728 == 28496) ? 1 : 0;
		26982 = (25696 == 25360) ? 1 : 0;
		if (19065 != 0) { goto 149; }
		*(26609) = 25980;
		return;
		-
		21841 = 21285 | 20787;
		stack.push(13073);
		exit();
		*(7267) = 6729;
		-
		890 = 421 | 32701;
		28388 = 27866 & 28002;
		-
214:	
		return;
		12757 = (12005 > 12130) ? 1 : 0;
		exit();
		*(2156) = 2407;
		fn72();
		goto 150;
fn94:	
		fn108();
		16696 = 16688 + 16756;
		16754 = 16677 * 16708;
210:	
		-
		if (22244 == 0) { goto 230; }
fn93:	
		if (24818 == 0) { goto 227; }
		if (28733 != 0) { goto 228; }
		30530 = 30314 | 31099;
		if (31491 == 0) { goto 229; }
		2356 = 2161 + 2904;
		stack.push(12962);
		16299 = *(16066);
		fn107();
		std::cin.get(25843);
fn38:	
		exit();
		12610 = *(13060);
		14113 = (14640 > 15229) ? 1 : 0;
		18731 = (19256 == 19792) ? 1 : 0;
		20838 = (21344 == 21776) ? 1 : 0;
		if (25721 != 0) { goto 189; }
109:	
		*(14577) = 15740;
fn56:	
		return;
		-
fn108:	
		25412 = 25709 | 26993;
		6523 = 6775 % 8004;
		std::cin.get(15178);
		stack.push(2737);
		-
		std::cout << "10212";
89:		
		exit();
		fn80();
		14655 = (15648 == 16756) ? 1 : 0;
		-
		29098 = 30088 | 31229;
		if (2096 != 0) { goto 165; }
		stack.push(30390);
		28298 = stack.pop();
		goto 166;
84:		
		*(21094) = 22907;
		25348 = 26175 % 27947;
		stack.push(8773);
		*(13913) = 15788;
		exit();
		fn58();
		stack.push(25257);
		fn59();
		-
		19358 = 20928;
183:	
		return;
		*(2916) = 4454;
		exit();
		11312 = 12894;
		*(5347) = 7544;
		exit();
		if (4212 != 0) { goto 138; }
		fn60();
		14689 = (15977 == 18244) ? 1 : 0;
		21896 = 23186 | 25587;
fn69:	
		std::cout << "30640";
		14526 = 16447 + 18526;
		30684 = 32682 % 1915;
		893 = (2870 > 4240) ? 1 : 0;
		if (16435 != 0) { goto 139; }
		std::cin.get(6440);
		24009 = (25644 == 27748) ? 1 : 0;
		9904 = 11933;
		std::cin.get(27562);
		*(748) = 3450;
fn52:	
		stack.push(9384);
		-
		*(11517) = 14253;
		fn61();
		stack.push(3548);
		if (28731 != 0) { goto 140; }
		fn62();
		15941 = stack.pop();
		28069 = 29849 | 32767;
		*(8820) = 11549;
		4788 = 7629 & 10104;
		std::cin.get(5004);
		if (21757 == 0) { goto 141; }
		9180 = 11702 & 14136;
		8245 = 11228;
		exit();
		exit();
		fn63();
		4454 = (7018 == 9541) ? 1 : 0;
		29816 = 32344;
fn25:	
		-
		std::cin.get(21411);
		fn64();
		stack.push(14787);
		fn32();
		16130 = (18470 == 21802) ? 1 : 0;
190:	
		fn65();
		28498 = 30796;
		if (27319 == 0) { goto 142; }
		-
fn53:	
		8586 = 11617 + 14071;
		*(20442) = 23461;
151:	
		28862 = (31765 == 2164) ? 1 : 0;
		31006 = 1322 & 4452;
		5393 = stack.pop();
		10880 = 14068 & 17722;
123:	
		22187 = 25294;
		exit();
		32446 = *(3349);
		stack.push(25282);
		fn66();
		stack.push(15928);
		-
		21892 = (24812 > 28198) ? 1 : 0;
		stack.push(17076);
		*(22512) = 25959;
		-
		if (24636 != 0) { goto 143; }
fn61:	
		20230 = 23829;
		12647 = (16165 == 19793) ? 1 : 0;
		27059 = 30607 | 1529;
		11967 = stack.pop();
		std::cout << "9136";
		-
207:	
		*(4212) = 7891;
		10012 = (13411 == 17764) ? 1 : 0;
		return;
		2457 = (5886 > 9828) ? 1 : 0;
		std::cout << "27817";
		6832 = stack.pop();
		stack.push(931);
		*(31708) = 2993;
		std::cin.get(10468);
		if (16419 != 0) { goto 144; }
		fn67();
		12613 = stack.pop();
		422 = 4488 | 8676;
		std::cin.get(24672);
		1712 = stack.pop();
		22625 = stack.pop();
		stack.push(31907);
		*(1244) = 6065;
		std::cin.get(14052);
		28710 = (218 > 5108) ? 1 : 0;
		6992 = (10799 == 15670) ? 1 : 0;
		30283 = (2327 == 6246) ? 1 : 0;
		32682 = *(3725);
		*(9893) = 14361;
		stack.push(8251);
fn34:	
		*(8042) = 12666;
		stack.push(16151);
		-
		fn68();
		std::cin.get(21236);
		27081 = stack.pop();
149:	
		27337 = stack.pop();
113:	
		*(3865) = 8249;
fn24:	
		fn45();
		if (19172 == 0) { goto 124; }
		-
		*(8678) = 13691;
		22981 = 28006 + 32490;
139:	
		std::cin.get(39);
		18692 = 23870 * 29028;
		std::cin.get(19712);
		2386 = 7489 & 12721;
		13992 = *(19144);
		*(5797) = 11613;
		24214 = (30004 == 2538) ? 1 : 0;
		std::cout << "28405";
		-
		*(16996) = 22836;
		if (773 != 0) { goto 125; }
		fn46();
		31349 = 4433;
212:	
		std::cout << "26500";
		*(15813) = 21413;
		31920 = ~4631;
		stack.push(11202);
		13158 = (18720 > 23764) ? 1 : 0;
		15618 = 21295 * 27001;
		5432 = 11068 + 16679;
		goto 126;
fn65:	
		stack.push(26282);
		24669 = (30953 == 4878) ? 1 : 0;
		*(7797) = 14694;
		27412 = 568 * 7463;
		fn90();
		21160 = 28110 & 1840;
		-
		if (8118 == 0) { goto 187; }
		-
		if (900 == 0) { goto 188; }
		exit();
		9489 = 16185 | 22884;
		stack.push(30486);
92:		
		26576 = 492 + 6734;
		std::cout << "5047";
		17123 = 24341 + 30773;
		6597 = 12982 & 20337;
		*(3168) = 10621;
		stack.push(24344);
87:		
		stack.push(10934);
		1953 = ~8392;
		-
195:	
		6425 = 13606 + 20769;
		std::cin.get(1349);
		*(14384) = 21589;
		goto 120;
186:	
		std::cin.get(11717);
		2296 = 10320 + 18548;
		*(8548) = 16743;
		fn105();
		16753 = 24869 | 323;
		fn106();
		*(10999) = 19825;
		11428 = (20278 > 28600) ? 1 : 0;
		12949 = stack.pop();
246:	
		28721 = 4295;
fn32:	
		fn49();
		26129 = stack.pop();
		std::cin.get(21092);
		12983 = (21917 == 30581) ? 1 : 0;
		16356 = (24257 == 85) ? 1 : 0;
		std::cout << "15242";
		8308 = 17372;
		fn50();
		*(14168) = 22967;
		fn51();
		*(19151) = 28598;
		std::cin.get(13045);
		15229 = (23595 > 32400) ? 1 : 0;
116:	
		std::cout << "20533";
103:	
		9055 = 17507 | 26932;
fn88:	
		-
fn50:	
		if (2720 == 0) { goto 121; }
		-
		stack.push(8121);
		-
		16629 = 25670 + 2080;
144:	
		fn44();
		exit();
fn62:	
fn86:	
		if (30375 == 0) { goto 122; }
		std::cin.get(7095);
		std::cin.get(20213);
		*(12903) = 22897;
		goto 123;
fn21:	
		14714 = 24101 & 1873;
		if (15998 != 0) { goto 95; }
152:	
		15011 = stack.pop();
		-
		-
		-
		if (14292 == 0) { goto 96; }
		16445 = 27098;
		20740 = 31013 & 8489;
		exit();
		*(31044) = 8624;
		9956 = 20178 + 31072;
		if (27553 != 0) { goto 97; }
		*(3289) = 14252;
		if (19921 == 0) { goto 98; }
		11120 = (21024 > 31428) ? 1 : 0;
		26438 = 3684 | 14712;
		*(2837) = 12909;
		fn24();
		if (25136 != 0) { goto 99; }
		4769 = ~15821;
		-
		24548 = (1753 == 12376) ? 1 : 0;
		-
		std::cout << "29578";
		25560 = ~3492;
		return;
		fn25();
		fn26();
		14757 = 25502 | 3556;
		std::cin.get(13412);
		-
		31191 = (8877 == 20320) ? 1 : 0;
		*(20535) = 31425;
		21342 = 31850 | 10526;
		32542 = (10274 == 21801) ? 1 : 0;
		11273 = (22896 > 549) ? 1 : 0;
		if (1657 != 0) { goto 100; }
		24978 = (2808 > 13872) ? 1 : 0;
		-
		12515 = ~23632;
		4057 = 15287 % 26489;
		25890 = 4401 + 15740;
		stack.push(29974);
		*(9566) = 20909;
		22645 = 1105;
		if (22248 == 0) { goto 101; }
		std::cin.get(15287);
		28834 = (7984 == 19388) ? 1 : 0;
		std::cout << "1680";
		16223 = 27241 | 6512;
		5513 = (16610 > 28209) ? 1 : 0;
		17058 = 29075 % 7984;
		12193 = *(23244);
		if (22968 != 0) { goto 102; }
		fn27();
		11542 = 23405 * 2356;
		fn28();
fn60:	
fn110:	
		-
		-
		*(20175) = 32673;
		7015 = (18474 > 30352) ? 1 : 0;
		*(4213) = 16021;
		11101 = 22640 | 2407;
		fn29();
		31085 = (9765 == 22273) ? 1 : 0;
		18839 = (30434 > 9771) ? 1 : 0;
		6821 = 19411;
		6070 = 17602 + 29760;
		if (8624 != 0) { goto 103; }
		std::cin.get(7621);
		std::cin.get(16420);
		*(4465) = 16763;
		return;
		16692 = (29032 == 8521) ? 1 : 0;
		exit();
		9181 = (21421 > 560) ? 1 : 0;
		1713 = *(14041);
		goto 104;
fn71:	
		24240 = 4253;
		-
		return;
		*(2283) = 15713;
		return;
230:	
		*(20596) = 720;
		854 = 13418 | 26977;
		20244 = 109 % 13605;
fn103:	
		6517 = 19062 + 32579;
		26027 = 5775 | 19442;
		if (19127 == 0) { goto 221; }
		26529 = ~6337;
		return;
83:		
		-
		15773 = stack.pop();
		16351 = ~29616;
90:		
		*(116) = 13779;
		if (2309 != 0) { goto 136; }
		std::cout << "11530";
		26751 = 7240;
		13985 = (27293 > 8561) ? 1 : 0;
		-
		13225 = 26224 | 6835;
		21954 = 2231 & 16237;
		17181 = 30248 & 11575;
		10599 = 23589 + 4953;
		if (14975 != 0) { goto 137; }
		*(20404) = 705;
82:		
		fn53();
		if (18304 != 0) { goto 133; }
		15615 = 29205 + 10296;
		std::cin.get(24614);
		9540 = 23405 | 4465;
		exit();
		15117 = (29041 == 10021) ? 1 : 0;
		17313 = ~31176;
		-
		14101 = 27757 | 9515;
		75 = stack.pop();
		10100 = *(23628);
fn107:	
		6559 = (20223 > 1574) ? 1 : 0;
		fn54();
		21957 = stack.pop();
182:	
		*(13273) = 27564;
		6097 = 20406;
		if (16438 != 0) { goto 134; }
		fn55();
		fn56();
		std::cin.get(18698);
		return;
		29648 = (11209 > 25131) ? 1 : 0;
		23176 = stack.pop();
		return;
		if (28705 != 0) { goto 135; }
		25197 = stack.pop();
		18811 = stack.pop();
		*(29278) = 11691;
		23413 = 4700;
		8164 = *(22233);
		stack.push(12719);
		*(18885) = 929;
		17369 = 32162;
		fn57();
		32089 = 14193 | 28986;
		22839 = (4989 == 19748) ? 1 : 0;
		16047 = 30877;
fn22:	
		fn31();
		exit();
		700 = (16149 == 30752) ? 1 : 0;
		22997 = 4768 % 20344;
		fn32();
88:		
		return;
		7172 = (22904 > 4713) ? 1 : 0;
		17838 = 32392 | 15331;
		*(9830) = 25436;
		-
		2020 = ~16600;
		*(24526) = 7077;
		std::cout << "4272";
		28629 = (11237 > 26491) ? 1 : 0;
		26961 = 9591 | 24955;
		*(22814) = 5417;
		8551 = 23845;
		std::cin.get(30818);
141:	
		-
		std::cout << "31716";
		exit();
		std::cout << "30336";
		fn33();
		-
		1503 = stack.pop();
		8007 = 23149 | 6513;
		4944 = 19972 % 3428;
		26932 = (9335 == 25439) ? 1 : 0;
		740 = 16860 % 32560;
		exit();
		-
		7132 = 22972;
		24636 = 8156;
		13585 = 29468 + 12596;
		27415 = (10724 == 26546) ? 1 : 0;
		28321 = 11471 + 28025;
		-
		-
		5869 = stack.pop();
		std::cout << "1161";
105:	
		if (12688 == 0) { goto 108; }
245:	
		1795 = (17517 == 1324) ? 1 : 0;
		exit();
		*(13325) = 30092;
		*(5611) = 21883;
		-
		fn34();
124:	
96:		
		*(370) = 16753;
		if (296 != 0) { goto 109; }
		*(324) = 16816;
118:	
		4805 = stack.pop();
		23952 = 7339 % 24443;
112:	
		27514 = (10784 > 27349) ? 1 : 0;
		fn35();
		exit();
		goto 110;
fn67:	30623 = (14819 > 31265) ? 1 : 0;
		13217 = 30175 + 13840;
		7615 = 24144 % 8338;
		*(10948) = 28592;
		-
		if (2448 == 0) { goto 212; }
		26608 = stack.pop();
		25425 = 9329 | 26932;
		goto 213;
fn64:	
		exit();
		stack.push(25406);
		fn102();
fn99:	
		11384 = 29276;
		24468 = (9698 > 27179) ? 1 : 0;
		if (20200 == 0) { goto 208; }
		-
		return;
		28397 = stack.pop();
		15557 = 1382 + 19440;
		if (10980 == 0) { goto 209; }
		25041 = 9910;
		*(4130) = 22228;
		10799 = (29493 > 14453) ? 1 : 0;
		return;
		stack.push(15076);
		-
227:	-
		27629 = stack.pop();
		std::cout << "17805";
		892 = (19242 > 4293) ? 1 : 0;
		goto 210;
167:	
		8308 = (27612 > 13796) ? 1 : 0;
		stack.push(1305);
		std::cout << "2874";
		18182 = (4479 > 23332) ? 1 : 0;
		28492 = (14758 == 926) ? 1 : 0;
		return;
		1218 = 20784 * 7095;
		fn95();
		*(17457) = 3793;
		if (20539 != 0) { goto 203; }
		*(23557) = 10516;
		std::cin.get(8709);
		*(4925) = 23748;
		std::cout << "31657";
		stack.push(22434);
		*(4034) = 23466;
		stack.push(20418);
		9013 = (28523 > 14480) ? 1 : 0;
		8563 = 27941 % 14623;
		-
		fn96();
		701 = (20785 == 7669) ? 1 : 0;
		-
		-
		-
189:	
		32598 = 19040 | 6513;
		fn97();
		12861 = (305 == 19573) ? 1 : 0;
		6656 = stack.pop();
		7600 = 26770 | 14256;
		27184 = 14677;
		fn98();
		957 = (20785 == 7413) ? 1 : 0;
		28557 = stack.pop();
		3249 = ~23103;
		std::cin.get(31711);
		if (24696 != 0) { goto 204; }
		*(875) = 20833;
		if (27922 == 0) { goto 205; }
		fn99();
fn26:	
		*(6985) = 27051;
		11956 = 31954 & 19810;
		std::cout << "6885";
fn29:	
		4496 = stack.pop();
95:		
		27408 = 14417 | 2428;
		exit();
		fn30();
		if (3685 != 0) { goto 105; }
		2512 = (22212 > 9776) ? 1 : 0;
		6071 = 25741 | 13407;
		*(15307) = 2984;
		return;
		-
		10196 = stack.pop();
		20777 = 8560 | 28979;
		return;
		exit();
		25491 = (13281 > 557) ? 1 : 0;
173:	
		-
		return;
		-
		15825 = (3243 > 24432) ? 1 : 0;
		if (8270 != 0) { goto 106; }
		*(28710) = 16611;
		*(9847) = 31099;
		6941 = 27233 * 15716;
		goto 107;
237:	
		29308 = 23788 & 3726;
		exit();
		return;
		32252 = (12264 > 6643) ? 1 : 0;
		19511 = stack.pop();
		*(24274) = 10540;
		8575 = 31471 + 19596;
		-
		23007 = 9066 | 30176;
		28957 = *(17329);
		return;
		if (30763 == 0) { goto 240; }
		18655 = 7092;
		if (9500 == 0) { goto 241; }
		if (4189 != 0) { goto 242; }
		std::cin.get(665);
		goto 243;
194:	
		2794 = (30052 == 16606) ? 1 : 0;
242:	
fn92:	
		goto 226;
117:	
		19696 = 5213 & 32056;
		std::cin.get(13790);
		11969 = 30323 + 24485;
		28130 = 13569 & 699;
		*(22160) = 16071;
		if (14213 != 0) { goto 174; }
		31927 = 17633;
		goto 175;
243:	
		12939 = 20341 * 27596;
		9130 = ~1746;
		26954 = 19911 % 4301;
		23062 = 16016 + 7660;
		if (22823 != 0) { goto 244; }
		exit();
		if (30830 != 0) { goto 245; }
		std::cout << "278";
		goto 246;
226:	
		fn110();
		if (10715 != 0) { goto 239; }
		5101 = 28907 * 19995;
108:	
		std::cin.get(32216);
		std::cout << "14245";
		3041 = ~27044;
		32694 = 23975 | 8963;
		fn91();
		23644 = 8608 * 1978;
		9474 = *(23422);
		2318 = (12035 > 19818) ? 1 : 0;
		31499 = 6461 % 16243;
		2680 = 10241 * 20014;
		1343 = (15278 == 22940) ? 1 : 0;
213:	
		13713 = ~27625;
		goto 190;
143:	
		22613 = 14793 % 6611;
		22849 = 16021 + 7812;
		*(31849) = 23621;
		goto 211;
106:	
		16587 = 25547 % 1348;
		18396 = (26263 == 2130) ? 1 : 0;
		11977 = (20960 > 29465) ? 1 : 0;
		15041 = 7031 | 30161;
		exit();
		19374 = ~9664;
228:	
		2895 = 25992 | 18319;
		31988 = 24261 % 14486;
		std::cin.get(31602);
		return;
		stack.push(12843);
fn55:	
		14279 = 4483 & 29506;
		18646 = 10903;
		exit();
		7340 = (32321 == 22579) ? 1 : 0;
		-
		23205 = (13783 == 6007) ? 1 : 0;
137:	
		19017 = 10419 * 13796;
		exit();
126:	
		fn37();
		*(31270) = 18426;
		stack.push(24824);
		25329 = 20047 + 11065;
		fn38();
fn70:	
		25791 = (16604 == 11296) ? 1 : 0;
		fn39();
		std::cout << "19000";
		30482 = 21286 % 16189;
		exit();
		*(1882) = 25413;
		4936 = 32553 * 23343;
		if (29976 == 0) { goto 116; }
		11484 = stack.pop();
		28180 = 19189 + 22189;
		-
		std::cout << "13560";
		goto 117;
fn68:	
		if (16715 != 0) { goto 214; }
		6914 = 28976 + 28543;
		8296 = 7791 | 29846;
		-
209:	
		31440 = 20614 | 18770;
		7629 = ~31617;
		20948 = stack.pop();
		31408 = 21442 & 18535;
		if (8611 != 0) { goto 215; }
		6578 = stack.pop();
		17430 = 8859 & 7117;
		std::cin.get(13522);
		stack.push(6087);
		27138 = ~29396;
		std::cout << "16841";
		9163 = 17419 % 27870;
		goto 216;
217:	
		-
		20179 = (22170 == 32579) ? 1 : 0;
		23830 = ~14623;
		29025 = ~26970;
		stack.push(20773);
		if (19907 == 0) { goto 232; }
		exit();
		3068 = 25438 & 23355;
		stack.push(1410);
		21672 = (15820 > 8824) ? 1 : 0;
		return;
		exit();
		32349 = 26402 + 19511;
		19210 = stack.pop();
		23608 = ~17701;
		return;
		if (6104 == 0) { goto 233; }
		29715 = stack.pop();
		4482 = 1713;
98:		
		exit();
		std::cout << "5360";
		return;
		std::cout << "11142";
		21127 = stack.pop();
		31309 = 25509;
		std::cout << "19617";
		19490 = 17687 | 4613;
		15940 = ~20569;
		if (115 != 0) { goto 119; }
		22578 = 29222 & 1244;
		-
		8303 = 15100 & 19592;
		return;
211:	
		23215 = 28018 % 1990;
		1215 = ~8139;
		stack.push(17728);
