/*Ellipse - эллипс с заданными координатами верхнего 
угла описанного вокруг него прямоугольника со 
сторонами, параллельными осям координат, и размерами
этого прямоугольника.*/
#pragma once
#include"Library.h"
#include"Shapes.h"
#include "Rectangle.h"
class Ellipse : public Rectangle {
	
public:
	Ellipse() = default;
	Ellipse(double a, double b, double x, double y) :Rectangle(a,b,x,y) {}
	void show();
	void save();
	void load();
	friend istream& operator >> (istream& is, Ellipse& obj);
	friend ostream& operator<<(ostream& os, Ellipse obj);
};