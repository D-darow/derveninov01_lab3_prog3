#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// Конструктор
bus::bus(int bus_num_in, int num_of_seats_in, int price_in)
{
	bus_num = bus_num_in;
	num_of_seats = num_of_seats_in;
	price = price_in;
	sum = 0;
}
// Деструктор
bus::~bus()
{
}
// Установка номера автобуса
void bus::set_bus_num(int bus_num_in)
{
	bus_num = bus_num_in;
}
// Получение номера автобуса
int bus::get_bus_num()
{
	return bus_num;
}
// Установка цены проезда
void bus::set_price(int price_in)
{
	price = price_in;
}
// Получение цены проезда
int bus::get_price()
{
	return price;
}
// Добавить пассажира
int bus::add_passenger()
{
	if (num_of_seats < 32) {
		num_of_seats += 1;
		sum += price;
		printf("\nПассажир успешно зашел в автобус и оплатил проезд.\nСвободных мест осталось: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\nПассажир не смог занять место. Автобус переолнен.\n\n");
		printf("Нажмите любую клавишу, чтобы вернуться в меню...");
		_getch();
		return -1;
	}
	return 0;
}
// Убрать пассажира
int bus::remove_passenger()
{
	if (num_of_seats > 0) {
		num_of_seats -= 1;
		printf("\nПассажир успешно покинул автобус.\nСвободных мест осталось: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\nОшибка. Автобус пуст.\n\n");
		printf("Нажмите любую клавишу, чтобы вернуться в меню...");
		_getch();
		return -1;
	}
	return 0;
}
// Ввод информации об автобусе
void bus::init_bus()
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите номер автобуса: ");
		if (flag == 1) printf("Ошибка. Введите номер автобуса: ");
		while (scanf("%d", &bus_num) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите номер автобуса: ");
		}
		flag = 1;
	} while (bus_num < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Введите цену проезда: ");
		if (flag == 1) printf("Ошибка. Введите цену проезда: ");
		while (scanf("%d", &price) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите цену проезда: ");
		}
		flag = 1;
	} while (price < 0);
	bus_engine.input_engine();
	bus_wheels.input_wheels();
	bus_driver.input_driver();
}
// Вывод информации об автобусе
void bus::print_bus()
{
	std::cout << "\nНомер автобуса: " << bus_num << std::endl;
	std::cout << "Занятые места: " << num_of_seats << " из 32" << std::endl;
	std::cout << "Цена проезда: " << price << std::endl;
	std::cout << "Сумма заработанных денег: " << sum << std::endl;
	bus_engine.print_engine();
	bus_wheels.print_wheels();
	bus_driver.print_driver();
}
