#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "foreign_driver.h"
#include "Circle.h"

int bus::total_sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Создание производного класса иностранного водителя
	foreign_driver driver1 = foreign_driver("ФЫв", "ФЫв", "5423342", 123);
	foreign_driver clone_driver = driver1;
	// Печать класса через <<
	std::cout << clone_driver;
	// Производный класс от абстрактного Figure
	Circle my_circle = Circle(2.345);
	std::cout << "\nПлощадь круга = " << my_circle.getSquare();
}