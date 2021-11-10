#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "wheels.h"
// ��������� �������� ������
void wheels::set_diametr_of_disk(int diametr)
{
	diameter_of_disk = diametr;
}
// ��������� �������� ������
int wheels::get_diametr_of_disk()
{
	return diameter_of_disk;
}
// ��������� ������ ����
void wheels::set_width_of_tire(int width)
{
	width_of_tire = width;
}
// ��������� ������ ����
int wheels::get_width_of_tire()
{
	return width_of_tire;
}
// �����������
wheels::wheels(int diametr, int width)
{
	diameter_of_disk = diametr;
	width_of_tire = width;
}
// ����������
wheels::~wheels()
{
}
// ���� ���������� � �������
void wheels::input_wheels(wheels& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ������� ����� (����): ");
		if (flag == 1) printf("������. ������� ������� ����� (����): ");
		while (scanf("%d", &object.diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������� ����� (����): ");
		}
		flag = 1;
	} while (object.diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("������� ������ ���� (��): ");
		if (flag == 1) printf("������. ������� ������ ���� (��): ");
		while (scanf("%d", &object.width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������ ���� (��): ");
		}
		flag = 1;
	} while (object.width_of_tire < 0);
}
// ����� ���������� � �������
void wheels::print_wheels(wheels object)
{
	printf("\n���������� � �������\n");
	printf("������� ����� (����): %d\n", object.diameter_of_disk);
	printf("������ ���� (��): %d\n\n", object.width_of_tire);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}
