#pragma once
#include "Library.h"

class Shapes {
protected:
	double x;
	double y;

public:
	Shapes();
	Shapes(double x, double y);

	virtual void show() = 0;
	virtual void save()=0;
	virtual void load() = 0;

	friend istream& operator >> (istream& is, Shapes& obj);	
};