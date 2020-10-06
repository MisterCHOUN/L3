#include "Color.hpp"


Color::Color() : m_red(0), m_green(0), m_blue(0) {}

Color::Color(const unsigned  char _red, const unsigned  char _green, const unsigned  char _blue)
	: m_red(_red), m_green(_green), m_blue(_blue) {}

Color::Color(const Color& _color)
{
	*this = _color;
}

Color::~Color() {}

/*------------------------------------------------------------------------*/

const Color& Color::operator=(const Color& _color)
{
	m_red = _color.m_red;
	m_green = _color.m_green;
	m_blue = _color.m_blue;
	return *this;
}

const Color& Color::operator=(const Color&& _color)
{
	m_red = _color.m_red;
	m_green = _color.m_green;
	m_blue = _color.m_blue;
	return *this;
}

std::ostream& operator<<(std::ostream& flux, const Color& _color)
{
	flux << "[" << (int)_color.m_red << ", " << (int)_color.m_green << ", " << (int)_color.m_blue << "]";
	return flux;
}

/*------------------------------------------------------------------------*/

const char Color::getRed() {return m_red;}

const char Color::getGreen() {return m_green;}

const char Color::getBlue() {return m_blue;}

void Color::setColor(const unsigned  char _red, const unsigned  char _green, const unsigned  char _blue)
{
	m_red = _red;
	m_green = _green;
	m_blue = _blue;
}