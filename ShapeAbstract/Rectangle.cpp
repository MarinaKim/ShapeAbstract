#include "Rectangle.h"

istream & operator >> (istream & is, Rectangle & obj)
{
	is >> obj.a >> obj.b >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Rectangle obj)
{
	os << setw(6) << obj.a << setw(6) << obj.b << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}

void Rectangle::show()
{
	cout << this->a << "\t" << this->b << "\t" << this->x << "\t" << this->y << endl;
}

void Rectangle::save()
{
	ofstream fout;
	fout.open("fout.txt", ios::app);
	fout << this->a << "\t" << this->b << "\t" << this->x << "\t" << this->y << endl;

	fout.close();
}

void Rectangle::load()
{
	Rectangle sh1;
	int count = 0;
	ifstream in;
	in.open("in_rectangle.txt");
	if (!in) {
		cerr << "File open Error." << endl;
	}
	else {
		while (!in.eof()) {
			in >> sh1;
		}
	}
	in.close();
	
		sh1.show();
}
