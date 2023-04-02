#include <iostream>
#include <string>

class analogSensor {
private:

	int value;

public:

	void Sensor_result() {
		std::cout << "Датчик выдал значение: " << value << std::endl << std::endl;
	}
	void Set_value(int x) {
		value = x;
	}

};

int main() {

	setlocale(LC_ALL, "Russian");

	analogSensor sensorI0;
	std::string action;
	bool b;

	std::cout << "Дошла ли деталь до конца? (Y если Да/N если Нет)" << std::endl << std::endl;
	std::cin >> action;

	b = action[0] == 'Y';
	if (b == true) {
		sensorI0.Set_value(1);
	}else sensorI0.Set_value(0);

	sensorI0.Sensor_result();

	return 0;
}
