/*Rectangle - прямоугольник с заданными координатами
верхнего левого угла и размерами*/

#pragma once
#include"Library.h"
#include"Shapes.h"

class Rectangle :public Shapes {
protected:
	double a;
	double b;
public:
	Rectangle() = default;
	Rectangle(double a, double b, double x, double y) :Shapes(x, y), a(a), b(b) {}

	void show();
	void save();
	void load();
	friend istream& operator >> (istream& is, Rectangle& obj);
	friend ostream& operator<<(ostream& os, Rectangle obj);

};
