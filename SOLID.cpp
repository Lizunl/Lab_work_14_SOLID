#include "SOLID.h"
#include <Windows.h>
#include <iostream>

using namespace std; 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Rectangle rec(10, 20); - Не заработала 

	auto rec = new Rectangle(20, 40);
	auto cir = new Circle(30);
	auto tri = new Triangle(60, 70, 80);

	cout << "Rectangle square: " << rec.getSquare() << endl;
	cout << "Circle square: " << cir.getSquare() << endl;
	cout << "Triangle square: " << tri.getSquare() << endl;


	cout << "Common square: " << rec.getSquare() + cir.getSquare() + tri.getSquare() << endl; 

	delete rec;
	delete cir;
	delete tri; 
	return 0; 
}