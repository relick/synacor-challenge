#pragma once

#include "common.h"
#include "uint15.h"

// 15 bit address space, fully-allocated
class Memory
{
	uint16* m_data{ nullptr };

public:
	////////// class stuff
	Memory()
		: m_data{ new uint16[32767]() }
	{}

	Memory(Memory&& _o)
		: m_data{ _o.m_data }
	{
		_o.m_data = nullptr;
	}
	void operator=(Memory&& _o)
	{
		m_data = _o.m_data;
		_o.m_data = nullptr;
	}

	Memory(Memory const&) = delete;
	void operator=(Memory const&) = delete;

	~Memory()
	{
		delete[] m_data;
		m_data = nullptr;
	}

	////////// methods
	void Copy(uint15 _dest, uint16* _src, uint15 _num)
	{
		std::memcpy(&m_data[_dest.x], _src, _num.x * sizeof(uint16));
	}

	uint16& operator[](uint15 _addr)
	{
		return m_data[_addr.x];
	}

	uint16 const& operator[](uint15 _addr) const
	{
		return m_data[_addr.x];
	}
};
