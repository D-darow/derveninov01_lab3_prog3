#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include <conio.h>
#include "engine.h"
// ����������� �� ���������
engine::engine()
{
	hs_power = 100;
	fuel = 1;
	num_of_cylinders = 8;
}
// �����������
engine::engine(int hs_power, int fuel, int num_of_cylinders)
{
	this->hs_power = hs_power;
	this->fuel = fuel;
	this->num_of_cylinders = num_of_cylinders;

}
// ����������
engine::~engine()
{
}
// ��������� ��������� ���
void engine::set_hs_power(int hs_power)
{
	this->hs_power = hs_power;
}
// ��������� ��������� ���
int engine::get_hs_power()
{
	return hs_power;
}
// ��������� ���� �������
void engine::set_fuel(int fuel)
{
	if (fuel >= 1 && fuel <= 2) {
		this->fuel = fuel;
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
void engine::set_num_of_cylinders(int num_of_cylinders)
{
	if (num_of_cylinders >= 2 && num_of_cylinders <= 16) {
		this->num_of_cylinders = num_of_cylinders;
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
void engine::input_engine()
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ���: ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ���: ");
		while (scanf("%d", &hs_power) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ���: ");
		}
		flag = 1;
	} while (hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("�������� ��� ������� (1 - ������, 2 - ������): ");
		if (flag == 1) printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		while (scanf("%d", &fuel) != 1) {
			while (getchar() != '\n');
			printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		}
		flag = 1;
	} while (fuel < 1 || fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ��������� (2 - 16): ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		while (scanf("%d", &num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		}
		flag = 1;
	} while (num_of_cylinders < 2 || num_of_cylinders > 16);
}
// ����� ���������� � ���������
void engine::print_engine()
{
	printf("\n���������� � ���������\n");
	printf("���������� ��������� ���: %d\n", hs_power);
	printf("��� �������: ");
	if (fuel == 1) {
		printf("������\n");
	}
	else {
		printf("������\n");
	}
	printf("���������� ���������: %d\n\n", num_of_cylinders);
}
