#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include <conio.h>
#include "engine.h"
// �����������
engine::engine(int power, int fuel_in, int cylinders)
{
	hs_power = power;
	fuel = fuel_in;
	num_of_cylinders = cylinders;

}
// ����������
engine::~engine()
{
}
// ��������� ��������� ���
void engine::set_hs_power(int hs_power_in)
{
	hs_power = hs_power_in;
}
// ��������� ��������� ���
int engine::get_hs_power()
{
	return hs_power;
}
// ��������� ���� �������
void engine::set_fuel(int fuel_in)
{
	if (fuel_in >= 1 && fuel <= 2) {
		fuel = fuel_in;
	}
	else {
		std::cout << "������. �������� ��� �������." << std::endl;
	}
}
// ��������� ���� �������
int engine::get_fuel()
{
	return fuel;
}
// ��������� ���������� ���������
void engine::set_num_of_cylinders(int num_of_cylinders_in)
{
	if (num_of_cylinders_in >= 2 && num_of_cylinders_in <= 16) {
		num_of_cylinders = num_of_cylinders_in;
	}
	else {
		std::cout << "������. �������� ���������� ���������." << std::endl;
	}
}
// ��������� ���������� ���������
int engine::get_num_of_cylinders()
{
	return num_of_cylinders;
}
// ���� ���������� � ���������
void engine::input_engine(engine& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ���: ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ���: ");
		while (scanf("%d", &object.hs_power) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ���: ");
		}
		flag = 1;
	} while (object.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("�������� ��� ������� (1 - ������, 2 - ������): ");
		if (flag == 1) printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		while (scanf("%d", &object.fuel) != 1) {
			while (getchar() != '\n');
			printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		}
		flag = 1;
	} while (object.fuel < 1 || object.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ��������� (2 - 16): ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		while (scanf("%d", &object.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		}
		flag = 1;
	} while (object.num_of_cylinders < 2 || object.num_of_cylinders > 16);
}
// ����� ���������� � ���������
void engine::print_engine(engine object)
{
	printf("\n���������� � ���������\n");
	printf("���������� ��������� ���: %d\n", object.hs_power);
	printf("��� �������: ");
	if (object.fuel == 1) {
		printf("������\n");
	}
	else {
		printf("������\n");
	}
	printf("���������� ���������: %d\n\n", object.num_of_cylinders);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}
