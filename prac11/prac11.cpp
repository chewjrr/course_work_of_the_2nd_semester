//реализация датчика приближения заготовки(i3)
#include <iostream>
 
class digitalSensor { 
private: 
 float value; 
public: 
 void Get_value(float v) { 
  value = v; 
 } 
 void sensorResult() { 
  std::cout << "Датчик выдает значение: " << value << std::endl << std::endl; 
 } 
}; 
 
int main() { 
 setlocale(LC_ALL, "Russian"); 

 float answer; 
 digitalSensor I3; 
  
 std::cout << "Сколько метров проехала загатовка? (макс 25 метров)" << std::endl; 
 std::cin >> answer; 

 I3.Get_value(answer / 25); 

 I3.sensorResult(); 
 
 return 0; 
}