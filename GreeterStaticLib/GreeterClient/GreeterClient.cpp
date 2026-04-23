#include <iostream>
#include <windows.h>
#include <string>
#include "Greeter.h"

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);
    Greeter greeter;
    std::cout << greeter.greet(name) << std::endl;

    return 0;
}