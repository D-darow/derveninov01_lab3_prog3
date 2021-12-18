#include "Circle.h"
// Площадь
double Circle::getSquare()
{
	return radius * radius * 3.14;
}
// Периметр
double Circle::getPerimeter()
{
	return 2 * 3.14 * radius;
}
