// Libraries
#include <iostream>
#include <string>

int main() { // Start
  std::string name; // Переменная имени
  std::cout << "Введите имя: "; // Вывод запроса
  std::cin >> name; // Ввод имени
  std::cout << "Hello world from " << name << std::endl; // Вывод приветствия
  return 0;
}
