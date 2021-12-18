#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	double radius;
public:
    Circle(double r) : radius(r)
    {
    }
    double getSquare() override; // Площадь
    double getPerimeter() override; // Периметр
};

