#include "SOLID.h"
#include <Windows.h>

using namespace std; 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rectangle newRectangle (20, 40);
	Circle newCircle(30);
	Triangle newTriangle(60, 70, 80);

	cout << "Rectangle square: " << newRectangle.getSquare() << endl;
	cout << "Circle square: " << newCircle.getSquare() << endl;
	cout << "Triangle square: " << newTriangle.getSquare() << endl;

	return 0; 
}