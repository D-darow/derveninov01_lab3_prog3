#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include <conio.h>
#include "engine.h"
// Конструктор
engine::engine(int power, int fuel_in, int cylinders)
{
	hs_power = power;
	fuel = fuel_in;
	num_of_cylinders = cylinders;

}
// Деструктор
engine::~engine()
{
}
// Установка лошадиных сил
void engine::set_hs_power(int hs_power_in)
{
	hs_power = hs_power_in;
}
// Получение лошадиных сил
int engine::get_hs_power()
{
	return hs_power;
}
// Установка рода топлива
void engine::set_fuel(int fuel_in)
{
	if (fuel_in >= 1 && fuel <= 2) {
		fuel = fuel_in;
	}
	else {
		std::cout << "Ошибка. Неверный род топлива." << std::endl;
	}
}
// Получение рода топлива
int engine::get_fuel()
{
	return fuel;
}
// Установка количества цилиндров
void engine::set_num_of_cylinders(int num_of_cylinders_in)
{
	if (num_of_cylinders_in >= 2 && num_of_cylinders_in <= 16) {
		num_of_cylinders = num_of_cylinders_in;
	}
	else {
		std::cout << "Ошибка. Неверное количество цилиндров." << std::endl;
	}
}
// Получение количества цилиндров
int engine::get_num_of_cylinders()
{
	return num_of_cylinders;
}
// Ввод информации о двигателе
void engine::input_engine(engine& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во лошадиных сил: ");
		if (flag == 1) printf("Ошибка. Введите кол-во лошадиных сил: ");
		while (scanf("%d", &object.hs_power) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во лошадиных сил: ");
		}
		flag = 1;
	} while (object.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Выберите род топлива (1 - бензин, 2 - дизель): ");
		if (flag == 1) printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		while (scanf("%d", &object.fuel) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		}
		flag = 1;
	} while (object.fuel < 1 || object.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во цилиндров двигателя (2 - 16): ");
		if (flag == 1) printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		while (scanf("%d", &object.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		}
		flag = 1;
	} while (object.num_of_cylinders < 2 || object.num_of_cylinders > 16);
}
// Вывод информации о двигателе
void engine::print_engine(engine object)
{
	printf("\nИнформация о двигателе\n");
	printf("Количество лошадиных сил: %d\n", object.hs_power);
	printf("Род топлива: ");
	if (object.fuel == 1) {
		printf("Бензин\n");
	}
	else {
		printf("Дизель\n");
	}
	printf("Количество цилиндров: %d\n\n", object.num_of_cylinders);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}
