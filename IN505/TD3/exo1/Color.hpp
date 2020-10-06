 #pragma once

#include <iostream>


class Color
{
public:
	Color();
	Color(const unsigned  char _red, const unsigned  char _green, const unsigned char _blue);
	Color(const Color& _color);
	~Color();

	const Color& operator=(const Color& _color);
	const Color& operator=(const Color&& _color);
	friend std::ostream& operator<<(std::ostream& flux, const Color& _color);

	const char getRed();
	const char getGreen();
	const char getBlue();
	void setColor(const unsigned  char _red, const unsigned  char _green, const unsigned  char _blue);

private:
	unsigned char m_red, m_green, m_blue;	
};