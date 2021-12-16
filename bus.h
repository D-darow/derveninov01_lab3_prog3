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
	static int total_sum; // ����� ����� ���. ����� �� ���� ���������
public:
	bus(); // ����������� ��� ����������
	bus(int bus_num); // ����������� � ����� ����������
	// ����������� �� ����� �����������
	bus(int bus_num, int num_of_seats, int price, int hs_power, int fuel, int num_of_cylinders, 
		int diametr_of_disk, int width_of_tire, std::string name, std::string surname, std::string phone_number);
	bus(const bus& my_bus); // ����������� �����������
	~bus(); // ����������
	void set_bus_num(int bus_num); // ��������� ������ ��������
	int get_bus_num(); // ��������� ������ ��������
	void set_price(int price); // ��������� ���� �������
	int get_price(); // ��������� ���� �������
    int* get_sum_by_address(); // ��������� ����� ����� ���������
	int& get_sum_by_link(); // ��������� ����� �� ������
	int add_passenger(); // �������� ���������
	int remove_passenger(); // ������ ���������
	void init_bus(); // ���� ���������� �� ��������
	void print_bus(); // ����� ���������� �� ��������
	friend void reset_sum(bus &bus); // ������������� ������� ��������� ����� �������
	int operator + (bus b2); // ���������� ��������� +
	bus& operator++(); // ���������� ���������� ����������
	bus& operator++(int); // ���������� ���������� �����������
	static int get_total_sum(); // ��������� ����� ����� ���. �����
	static void set_total_sum(int total); // ��������� ����� ����� ���. �����
};