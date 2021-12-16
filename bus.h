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
	static int total_sum; // Общая сумма зар. денег со всех автобусов
public:
	bus(); // Конструктор без параметров
	bus(int bus_num); // Конструктор с одним параметром
	// Конструктор со всеми параметрами
	bus(int bus_num, int num_of_seats, int price, int hs_power, int fuel, int num_of_cylinders, 
		int diametr_of_disk, int width_of_tire, std::string name, std::string surname, std::string phone_number);
	bus(const bus& my_bus); // Конструктор копирования
	~bus(); // Деструктор
	void set_bus_num(int bus_num); // Установка номера автобуса
	int get_bus_num(); // Получение номера автобуса
	void set_price(int price); // Установка цены проезда
	int get_price(); // Получение цены проезда
    int* get_sum_by_address(); // Получение суммы через указатель
	int& get_sum_by_link(); // Получение суммы по ссылке
	int add_passenger(); // Добавить пассажира
	int remove_passenger(); // Убрать пассажира
	void init_bus(); // Ввод информации об автобусе
	void print_bus(); // Вывод информации об автобусе
	friend void reset_sum(bus &bus); // Дружественная функция зануления суммы объекта
	int operator + (bus b2); // Перегрузка оператора +
	bus& operator++(); // Перегрузка инкремента префиксная
	bus& operator++(int); // Перегрузка инкремента постфиксная
	static int get_total_sum(); // Получение общей суммы зар. денег
	static void set_total_sum(int total); // Установка общей суммы зар. денег
};