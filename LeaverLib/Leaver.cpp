#include <iostream>
#include <string>
#include <windows.h>
#include "LeaverLib.h"

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);
    Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    return 0;
}