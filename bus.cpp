#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// �����������
bus::bus(int bus_num_in, int num_of_seats_in, int price_in)
{
	bus_num = bus_num_in;
	num_of_seats = num_of_seats_in;
	price = price_in;
	sum = 0;
}
// ����������
bus::~bus()
{
}
// ��������� ������ ��������
void bus::set_bus_num(int bus_num_in)
{
	bus_num = bus_num_in;
}
// ��������� ������ ��������
int bus::get_bus_num()
{
	return bus_num;
}
// ��������� ���� �������
void bus::set_price(int price_in)
{
	price = price_in;
}
// ��������� ���� �������
int bus::get_price()
{
	return price;
}
// �������� ���������
int bus::add_passenger()
{
	if (num_of_seats < 32) {
		num_of_seats += 1;
		sum += price;
		printf("\n�������� ������� ����� � ������� � ������� ������.\n��������� ���� ��������: %d\n\n", 32 - num_of_seats);
	}
	else {
		printf("\n�������� �� ���� ������ �����. ������� ���������.\n\n");
		printf("������� ����� �������, ����� ��������� � ����...");
		_getch();
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
		printf("������� ����� �������, ����� ��������� � ����...");
		_getch();
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
