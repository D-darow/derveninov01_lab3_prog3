#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// ����������� ��� ����������
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
// ����������� � ����� ����������
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
// �����������
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
// ����������� �����������
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
// ����������
bus::~bus()
{
}
// ��������� ������ ��������
void bus::set_bus_num(int bus_num)
{
	this->bus_num = bus_num;
}
// ��������� ������ ��������
int bus::get_bus_num()
{
	return bus_num;
}
// ��������� ���� �������
void bus::set_price(int price)
{
	this->price = price;
}
// ��������� ���� �������
int bus::get_price()
{
	return price;
}
// ��������� ����� ����� ���������
int* bus::get_sum_by_address()
{
	return &sum;
}
// ��������� ����� �� ������
int& bus::get_sum_by_link()
{
	return sum;
}
// �������� ���������
int bus::add_passenger()
{
	if (num_of_seats < 32) {
		num_of_seats += 1;
		sum += price;
		int tmp = bus::get_total_sum();
		bus::set_total_sum(tmp + price);
		printf("\n�������� ������� ����� � ������� � ������� ������.\n��������� ���� ��������: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\n�������� �� ���� ������ �����. ������� ���������.\n\n");
		return -1;
	}
	return 0;
}
// ������ ���������
int bus::remove_passenger()
{
	if (num_of_seats > 0) {
		num_of_seats -= 1;
		printf("\n�������� ������� ������� �������.\n��������� ���� ��������: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\n������. ������� ����.\n\n");
		return -1;
	}
	return 0;
}
// ���� ���������� �� ��������
void bus::init_bus()
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ����� ��������: ");
		if (flag == 1) printf("������. ������� ����� ��������: ");
		while (scanf("%d", &bus_num) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ����� ��������: ");
		}
		flag = 1;
	} while (bus_num < 0);
	flag = 0;
	do {
		if (flag == 0) printf("������� ���� �������: ");
		if (flag == 1) printf("������. ������� ���� �������: ");
		while (scanf("%d", &price) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���� �������: ");
		}
		flag = 1;
	} while (price < 0);
	bus_engine.input_engine();
	bus_wheels.input_wheels();
	bus_driver.input_driver();
}
// ����� ���������� �� ��������
void bus::print_bus()
{
	std::cout << "\n����� ��������: " << bus_num << std::endl;
	std::cout << "������� �����: " << num_of_seats << " �� 32" << std::endl;
	std::cout << "���� �������: " << price << std::endl;
	std::cout << "����� ������������ �����: " << sum << std::endl;
	bus_engine.print_engine();
	bus_wheels.print_wheels();
	bus_driver.print_driver();
}
// ���������� ��������� +
int bus::operator+(bus b2)
{
	return this->sum + b2.sum;
}
// ���������� ���������� ����������
bus& bus::operator++()
{
	sum += price;
	return *this;
}
// ���������� ���������� �����������
bus& bus::operator++(int)
{
	bus prev = *this;
	++* this;
	return prev;
}
// ��������� ����� ����� ���. �����
int bus::get_total_sum()
{
	return total_sum;
}
void bus::set_total_sum(int total)
{
	bus::total_sum = total;
}
// ������������� ������� ��������� ����� �������
void reset_sum(bus &bus)
{
	bus.sum = 0;
}
