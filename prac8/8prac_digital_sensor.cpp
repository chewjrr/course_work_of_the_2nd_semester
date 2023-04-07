//реализация цифрового датчика на примера датчика наполнения контейнира с готовыми изделиями (I2)
//контейнер максимум вмещает 100 заготовок, диапозон значений от 0 до 1

#include <iostream>

class digital_sensor {
private:
	float value;
public:
	void Get_value(float x) {
		value = x / 100;
	}
	void Show_value() {
		std::cout << "Датчик выдал значение: " << value << std::endl << std::endl;
	}
};

int main() {
	digital_sensor i2;

	setlocale(LC_ALL, "Russian");

	float a = 0;

	std::cout << "Введите количество заготовок в контейнере (макс. 100): ";
	std::cin >> a;
	std::cout << std::endl;

	i2.Get_value(a);
	i2.Show_value();

	return 0;
}