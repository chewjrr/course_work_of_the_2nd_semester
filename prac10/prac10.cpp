//Реализация кнопки I4 (Кнопка старта конвейера) 
#include <iostream> 
#include <string> 
 
class analogSensor { 
private: 
 int value; 
public: 
 void Get_value(int v) { 
  value = v; 
 } 
 void sensorResult() { 
  std::cout << "Датчик выдает значение: " << value << std::endl << std::endl; 
 } 
}; 
 
int main() { 
 setlocale(LC_ALL, "Russian"); 
 
 analogSensor I4; 
 std::string answer; 
  
 std::cout << "Запустить конвейер? Y если Yes, чота другое если No" << std::endl; 
 std::cin >> answer; 
 
 if (answer == "Y") { 
  I4.Get_value(1); 
 } 
 else { 
  I4.Get_value(0); 
 } 
 
 I4.sensorResult(); 
 
 return 0; 
}
