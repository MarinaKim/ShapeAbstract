/*Square  - квадрат, который характеризуется 
координатами левого верхнего угла и длиной стороны*/
#pragma once
#pragma once
#include"Library.h"
#include"Shapes.h"

class Square :public Shapes {
private:
	double a;
	public:
		Square() = default;
		Square(double a, double x, double y) :Shapes(x, y), a(a){}

		void show();
		void save();
		void load();
	
	friend istream& operator >> (istream& is, Square & obj);
	friend ostream& operator<<(ostream& os, Square  obj);

};