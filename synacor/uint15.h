#pragma once

#include "common.h"

class uint15
{
	static uint16 constexpr s_fifteenBits = 32767;
	void m15()
	{
		x &= s_fifteenBits;
	}
public:
	uint16 x{ 0 };

	void operator+=(uint15 _o)
	{
		x += _o.x;
		m15();
	}
	void operator-=(uint15 _o)
	{
		x -= _o.x;
		m15();
	}
	void operator*=(uint15 _o)
	{
		x *= _o.x;
		m15();
	}
	void operator/=(uint15 _o)
	{
		x /= _o.x;
		m15();
	}
	void operator%=(uint15 _o)
	{
		x %= _o.x;
		m15();
	}
	uint15& operator++()
	{
		++x;
		m15();
		return *this;
	}
	uint15 operator++(int)
	{
		uint15 ret = *this;
		++(*this);
		return ret;
	}

	bool operator==(uint15 _o) const
	{
		return x == _o.x;
	}

	uint15() {}
	uint15(uint16 _o) : x{ _o } { m15(); }
};

inline uint15 operator+(uint15 _a, uint15 _b)
{
	uint15 r = _a;
	r += _b;
	return r;
}
inline uint15 operator-(uint15 _a, uint15 _b)
{
	uint15 r = _a;
	r -= _b;
	return r;
}
inline uint15 operator*(uint15 _a, uint15 _b)
{
	uint15 r = _a;
	r *= _b;
	return r;
}
inline uint15 operator/(uint15 _a, uint15 _b)
{
	uint15 r = _a;
	r /= _b;
	return r;
}
inline uint15 operator%(uint15 _a, uint15 _b)
{
	uint15 r = _a;
	r %= _b;
	return r;
}