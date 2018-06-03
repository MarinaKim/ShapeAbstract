/*
Создайте массив фигур,+
сохраните фигуры в файл,+
загрузите в другой массив
и отобразите информацию о каждой из фигур.
*/

#include"Shapes.h"
#include"Circle.h"
#include"Ellipse.h"
#include"Rectangle.h"
#include"Square.h"

int main() {
	// массив фигур
	Shapes **sh;
	sh = new Shapes*[4];
	Circle c(3, 3, 3),c1;
	sh[0] = &c;
	Ellipse e(5, 4, 3, 3),e1;
	sh[1] = &e;
	Rectangle r(6, 8, 4, 5),r1;
	sh[2] = &r;
	Square s(4, 2, 2),s1;
	sh[3] = &s;
	cout << "Shapes massiv:" << endl;
	for (int i = 0; i < 4; i++)
		(*sh[i]).show();
	cout << "-------------------------------------------------" << endl;
	//вывод в файл fout.txt
	for (int i = 0; i < 4; i++)
		(*sh[i]).save();

	//вывод из файла fout.txt
	cout << "From file:" << endl;
	c1.load();
	e1.load();
	r1.load();
	s1.load();
	cout << "-------------------------------------------------" << endl;
	//// from fout.txt
	//Shapes **sh2;
	//int count = 0;
	//ifstream in;
	//in.open("fout.txt");
	//if (!in) {
	//	cerr << "File open Error." << endl;
	//}
	//else {
	//	while (!in.eof()) {
	//		in >> (*sh2[count++]);
	//	}
	//}
	//in.close();	
	//for (int i = 0; i < 4; i++)
		//(*sh2[i]).show();
	system("pause");
	return 0;
}
