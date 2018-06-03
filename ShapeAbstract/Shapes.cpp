#include "Shapes.h"

Shapes::Shapes()
{
	this->x = 0;
	this->y = 0;
}

Shapes::Shapes(double x, double y)
{
	this->x = x;
	this->y = y;
}

istream & operator >> (istream & is, Shapes & obj)
{
	is >> obj.x >> obj.y;
	return is;
}
