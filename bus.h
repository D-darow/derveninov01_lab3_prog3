#pragma once
#include "engine.h"
#include "wheels.h"
#include "driver.h"

class bus
{
private:
	int bus_num; // ����� ��������
	int num_of_seats; // ������� ����� (max 32)
	engine bus_engine;
	wheels bus_wheels;
	driver bus_driver;
	int price; // ���� ������� (���)
	int sum; // ����� ������������ �����
public:
	bus(int bus_num_in, int num_of_seats_in, int price_in); // �����������
	~bus(); // ����������
	void set_bus_num(int bus_num_in); // ��������� ������ ��������
	int get_bus_num(); // ��������� ������ ��������
	void set_price(int price_in); // ��������� ���� �������
	int get_price(); // ��������� ���� �������
	int add_passenger(); // �������� ���������
	int remove_passenger(); // ������ ���������
	void init_bus(); // ���� ���������� �� ��������
	void print_bus(); // ����� ���������� �� ��������
};