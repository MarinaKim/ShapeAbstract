#include "Square.h"

void Square::show()
{
	cout << this->a << "\t" << this->x << "\t" << this->y << endl;
}
void Square::save()
{
	ofstream fout;
	fout.open("fout.txt", ios::app);
	fout << this->a << "\t" << this->x << "\t" << this->y << endl;
	fout.close();
}

void Square::load()
{
	Square sh1;
	int count = 0;
	ifstream in;
	in.open("in_square.txt");
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

istream & operator >> (istream & is, Square & obj)
{
	is >> obj.a >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Square obj)
{
	os << setw(6) << obj.a << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}
