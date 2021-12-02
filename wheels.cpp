#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "wheels.h"
// Установка диаметра колеса
void wheels::set_diametr_of_disk(int diametr)
{
	diameter_of_disk = diametr;
}
// Получение диаметра колеса
int wheels::get_diametr_of_disk()
{
	return diameter_of_disk;
}
// Установка ширины шины
void wheels::set_width_of_tire(int width)
{
	width_of_tire = width;
}
// Получение ширины шины
int wheels::get_width_of_tire()
{
	return width_of_tire;
}
// Конструктор по умолчанию
wheels::wheels()
{
	diameter_of_disk = 1;
	width_of_tire = 1;
}
// Конструктор
wheels::wheels(int diametr, int width)
{
	diameter_of_disk = diametr;
	width_of_tire = width;
}
// Деструктор
wheels::~wheels()
{
}
// Ввод информации о колесах
void wheels::input_wheels()
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите диаметр диска (Дюйм): ");
		if (flag == 1) printf("Ошибка. Введите диаметр диска (Дюйм): ");
		while (scanf("%d", &diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите диаметр диска (Дюйм): ");
		}
		flag = 1;
	} while (diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Введите ширину шины (мм): ");
		if (flag == 1) printf("Ошибка. Введите ширину шины (мм): ");
		while (scanf("%d", &width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите ширину шины (мм): ");
		}
		flag = 1;
	} while (width_of_tire < 0);
}
// Вывод информации о колесах
void wheels::print_wheels()
{
	printf("\nИнформация о колесах\n");
	printf("Диаметр диска (Дюйм): %d\n", diameter_of_disk);
	printf("Ширина шины (мм): %d\n\n", width_of_tire);
}
