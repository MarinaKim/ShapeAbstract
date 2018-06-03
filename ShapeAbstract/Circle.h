//Circle - окружность с заданными координатами 
//центра и радиусом
#pragma once
#include"Library.h"
#include"Shapes.h"
class Circle : public Shapes {
private:
	double r;
public:
	Circle() = default;
	Circle(double r, double x, double y) :Shapes(x, y), r(r) {}
	void show();
	void save();
	void load();
	friend istream& operator >> (istream& is, Circle& obj);
	friend ostream& operator<<(ostream& os, Circle obj);
};
