#pragma once
#include<cstdint>
#include<iostream>

class RGBA
{
public:
	RGBA() = default;
	RGBA(uint8_t red, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255) : m_red( red ), m_green{ green }, m_blue{ blue }, m_alpha{ alpha }
	{}

	void print();

private:
	std::uint8_t m_red{ 0 },
		m_green{ 0 },
		m_blue{ 0 },
		m_alpha = { 255 };
};
