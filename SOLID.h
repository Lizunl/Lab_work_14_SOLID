#pragma once
#include <math.h>
#include <iostream>

using namespace std; 

class Figure
{
public: 
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
	virtual void ShowFigureType() = 0;
};

class Rectangle : public Figure
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h)
    {
    }
    double getSquare() override
    {
        return width * height;
    }
    double getPerimeter() override
    {
        return width * 2 + height * 2;
    }
    void showFigureType() 
    {
        std::cout << "Четырёхугольник" << std::endl;
    }
    ~Rectangle() {
        cout << "Деструктор прямоугольника" << endl; 
    };
};
class Circle : public Figure
{
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {
    }
    double getSquare() override
    {
        return radius * radius * 3.14;
    }
    double getPerimeter() override
    {
        return 2 * 3.14 * radius;
    }
    void showFigureType()
    {
        std::cout << "Круг" << std::endl;
    }
    ~Circle() {
        cout << "Деструктор круга" << endl;
    };
};

class Triangle : public Figure
{
private:
    double bottomside;
    double side_1;
    double side_2; 
public:
    Triangle(double bs, double s_1, double s_2) : bottomside (bs), side_1 (s_1), side_2 (s_2)
    {
    }
    double getSquare() override
    {
        return sqrt(((bottomside + side_1 + side_2)/2) * (((bottomside + side_1 + side_2) / 2) - bottomside) * (((bottomside + side_1 + side_2) / 2) - side_1) * (((bottomside + side_1 + side_2) / 2) - side_2));
    }
    double getPerimeter() override
    {
        return bottomside + side_1 + side_2;
    }
    void showFigureType()
    {
        std::cout << "Треугольник" << std::endl;
    }
    ~Triangle() {
        cout << "Деструктор треугольника" << endl;
    };
};