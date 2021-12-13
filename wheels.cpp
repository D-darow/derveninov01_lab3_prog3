#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "wheels.h"
// ��������� �������� ������
void wheels::set_diametr_of_disk(int diametr_of_disk)
{
	this->diameter_of_disk = diametr_of_disk;
}
// ��������� �������� ������
int wheels::get_diametr_of_disk()
{
	return diameter_of_disk;
}
// ��������� ������ ����
void wheels::set_width_of_tire(int width_of_tire)
{
	this->width_of_tire = width_of_tire;
}
// ��������� ������ ����
int wheels::get_width_of_tire()
{
	return width_of_tire;
}
// ����������� �� ���������
wheels::wheels()
{
	diameter_of_disk = 1;
	width_of_tire = 1;
}
// �����������
wheels::wheels(int diametr_of_disk, int width_of_tire)
{
	this->diameter_of_disk = diametr_of_disk;
	this->width_of_tire = width_of_tire;
}
// ����������
wheels::~wheels()
{
}
// ���� ���������� � �������
void wheels::input_wheels()
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ������� ����� (����): ");
		if (flag == 1) printf("������. ������� ������� ����� (����): ");
		while (scanf("%d", &diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������� ����� (����): ");
		}
		flag = 1;
	} while (diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("������� ������ ���� (��): ");
		if (flag == 1) printf("������. ������� ������ ���� (��): ");
		while (scanf("%d", &width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������ ���� (��): ");
		}
		flag = 1;
	} while (width_of_tire < 0);
}
// ����� ���������� � �������
void wheels::print_wheels()
{
	printf("\n���������� � �������\n");
	printf("������� ����� (����): %d\n", diameter_of_disk);
	printf("������ ���� (��): %d\n\n", width_of_tire);
}
