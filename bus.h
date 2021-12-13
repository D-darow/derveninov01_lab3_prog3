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
	bus(int bus_num, int num_of_seats, int price); // �����������
	~bus(); // ����������
	void set_bus_num(int bus_num); // ��������� ������ ��������
	int get_bus_num(); // ��������� ������ ��������
	void set_price(int price); // ��������� ���� �������
	int get_price(); // ��������� ���� �������
	int add_passenger(); // �������� ���������
	int remove_passenger(); // ������ ���������
	void init_bus(); // ���� ���������� �� ��������
	void print_bus(); // ����� ���������� �� ��������
	friend void reset_sum(bus &bus); // ������������� ������� ��������� ����� �������
	int operator + (bus b2); // ���������� ��������� +
	bus& operator++(); // ���������� ���������� ����������
	bus& operator++(int); // ���������� ���������� �����������
};