#pragma once
#include "engine.h"
#include "wheels.h"
#include "driver.h"

class bus
{
private:
	int bus_num; // Номер автобуса
	int num_of_seats; // Занятые места (max 32)
	engine bus_engine;
	wheels bus_wheels;
	driver bus_driver;
	int price; // Цена проезда (Руб)
	int sum; // Сумма заработанных денег
public:
	bus(int bus_num, int num_of_seats, int price); // Конструктор
	~bus(); // Деструктор
	void set_bus_num(int bus_num); // Установка номера автобуса
	int get_bus_num(); // Получение номера автобуса
	void set_price(int price); // Установка цены проезда
	int get_price(); // Получение цены проезда
	int add_passenger(); // Добавить пассажира
	int remove_passenger(); // Убрать пассажира
	void init_bus(); // Ввод информации об автобусе
	void print_bus(); // Вывод информации об автобусе
	friend void reset_sum(bus &bus); // Дружественная функция зануления суммы объекта
	int operator + (bus b2); // Перегрузка оператора +
	bus& operator++(); // Перегрузка инкремента префиксная
	bus& operator++(int); // Перегрузка инкремента постфиксная
};