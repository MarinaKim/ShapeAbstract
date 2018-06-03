#include "Circle.h"

istream & operator >> (istream & is, Circle & obj)
{
	is >> obj.r >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Circle obj)
{
	os << setw(6) << obj.r << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}

void Circle::show()
{
	cout << this->r << "\t" << this->x << "\t" << this->y << endl;
}

void Circle::save()
{
	ofstream fout;
	fout.open("fout.txt", ios::app);
	fout << this->r << "\t" << this->x << "\t" << this->y << endl;
	fout.close();
}

void Circle::load()
{
	Circle sh1;
	int count = 0;
	ifstream in;
	in.open("in_circle.txt");
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
