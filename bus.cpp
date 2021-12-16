#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// Конструктор без параметров
bus::bus()
{
	bus_num = 0;
	num_of_seats = 0;
	price = 0;
	sum = 0;
	engine bus_engine = engine();
	wheels bus_wheels = wheels();
	driver bus_driver = driver();
}
// Конструктор с одним параметром
bus::bus(int bus_num)
{
	this->bus_num = bus_num;
	num_of_seats = 0;
	price = 0;
	sum = 0;
	engine bus_engine = engine();
	wheels bus_wheels = wheels();
	driver bus_driver = driver();
}
// Конструктор
bus::bus(int bus_num, int num_of_seats, int price, int hs_power, int fuel, int num_of_cylinders,
	int diametr_of_disk, int width_of_tire, std::string name, std::string surname, std::string phone_number)
{
	this->bus_num = bus_num;
	this->num_of_seats = num_of_seats;
	this->price = price;
	bus_engine = engine(hs_power, fuel, num_of_cylinders);
	bus_wheels = wheels(diametr_of_disk, width_of_tire);
	bus_driver = driver(name, surname, phone_number);
	sum = 0;
}
// Конструктор копирования
bus::bus(const bus& my_bus)
{
	bus_num = my_bus.bus_num;
	num_of_seats = my_bus.num_of_seats;
	price = my_bus.price;
	sum = my_bus.sum;
	bus_engine = my_bus.bus_engine;
	bus_wheels = my_bus.bus_wheels;
	bus_driver = my_bus.bus_driver;
}
// Деструктор
bus::~bus()
{
}
// Установка номера автобуса
void bus::set_bus_num(int bus_num)
{
	this->bus_num = bus_num;
}
// Получение номера автобуса
int bus::get_bus_num()
{
	return bus_num;
}
// Установка цены проезда
void bus::set_price(int price)
{
	this->price = price;
}
// Получение цены проезда
int bus::get_price()
{
	return price;
}
// Получение суммы через указатель
int* bus::get_sum_by_address()
{
	return &sum;
}
// Получение суммы по ссылке
int& bus::get_sum_by_link()
{
	return sum;
}
// Добавить пассажира
int bus::add_passenger()
{
	if (num_of_seats < 32) {
		num_of_seats += 1;
		sum += price;
		int tmp = bus::get_total_sum();
		bus::set_total_sum(tmp + price);
		printf("\nПассажир успешно зашел в автобус и оплатил проезд.\nСвободных мест осталось: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\nПассажир не смог занять место. Автобус переолнен.\n\n");
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
// Перегрузка оператора +
int bus::operator+(bus b2)
{
	return this->sum + b2.sum;
}
// Перегрузка инкремента префиксная
bus& bus::operator++()
{
	sum += price;
	return *this;
}
// Перегрузка инкремента постфиксная
bus& bus::operator++(int)
{
	bus prev = *this;
	++* this;
	return prev;
}
// Получение общей суммы зар. денег
int bus::get_total_sum()
{
	return total_sum;
}
void bus::set_total_sum(int total)
{
	bus::total_sum = total;
}
// Дружественная функция зануления суммы объекта
void reset_sum(bus &bus)
{
	bus.sum = 0;
}
