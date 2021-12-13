#pragma once
class engine
{
private:
	int hs_power; // ��������� ����
	int fuel; // ��� �������
	int num_of_cylinders; // ���������� ��������� (�� 2 �� 16)
public:
	engine(); // ���������� �� ���������
	engine(int hs_power, int fuel, int num_of_cylinders); // �����������
	~engine(); // ����������
	void set_hs_power(int hs_power); // ��������� ��������� ���
	int get_hs_power(); // ��������� ��������� ���
	void set_fuel(int fuel); // ��������� ���� �������
	int get_fuel(); // ��������� ���� �������
	void set_num_of_cylinders(int num_of_cylinders); // ��������� ���������� ���������
	int get_num_of_cylinders(); // ��������� ���������� ���������
	void input_engine(); // ���� ���������� � ���������
	void print_engine(); // ����� ���������� � ���������
};