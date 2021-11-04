#pragma once
class engine
{
private:
	int hs_power; // Лошадиные силы
	int fuel; // Род топлива
	int num_of_cylinders; // Количество цилиндров (от 2 до 16)
public:
	void set_hs_power(int hs_power_in); // Установка лошадиных сил
	int get_hs_power(); // Получение лошадиных сил
	void set_fuel(int fuel_in); // Установка рода топлива
	int get_fuel(); // Получение рода топлива
	void set_num_of_cylinders(int num_of_cylinders_in); // Установка количества цилиндров
	int get_num_of_cylinders(); // Получение количества цилиндров
	void input_engine(engine& object); // Ввод информации о двигателе
	void print_engine(engine object); // Вывод информации о двигателе
};