#pragma once
class engine
{
private:
	int hs_power; // ��������� ����
	int fuel; // ��� �������
	int num_of_cylinders; // ���������� ��������� (�� 2 �� 16)
public:
	void set_hs_power(int hs_power_in); // ��������� ��������� ���
	int get_hs_power(); // ��������� ��������� ���
	void set_fuel(int fuel_in); // ��������� ���� �������
	int get_fuel(); // ��������� ���� �������
	void set_num_of_cylinders(int num_of_cylinders_in); // ��������� ���������� ���������
	int get_num_of_cylinders(); // ��������� ���������� ���������
	void input_engine(engine& object); // ���� ���������� � ���������
	void print_engine(engine object); // ����� ���������� � ���������
};