#pragma once
class wheels
{
private:
	int diameter_of_disk; // Диаметр колеса (В дюймах)
	int width_of_tire; // Ширина шины (В мм)
public:
	void set_diametr_of_disk(int diametr); // Установка диаметра колеса
	int get_diametr_of_disk(); // Получение диаметра колеса
	void set_width_of_tire(int width); // Установка ширины шины
	int get_width_of_tire(); // Получение ширины шины
	wheels(); // Конструктор по умолчанию
	wheels(int diametr, int width); // Конструктор
	~wheels(); // Деструктор
	void input_wheels(); // Ввод информации о колесах
	void print_wheels(); // Вывод информации о колесах
};

