#include "Utils.h"
#include <iostream>
#include <string>

void Utils::printMenu()
{
	std::cout << "\n\nMenu:\n";
	std::cout << "1. Add Student\n";
	std::cout << "2. Output\n";
	std::cout << "3. Write ot file\n";
	std::cout << "4. Read from file\n";
	std::cout << "5. Clear\n";
	std::cout << "0. Exit\n\n";
}

int Utils::inputInteger() {
    std::string str;

    std::cin >> str;
    if (str.find_first_not_of("0123456789") != std::string::npos) {
        std::cout << "Wrong input\n";
    }
    else {
        return stoi(str);
    }
    std::cin.ignore();
    return -1;
}

int Utils::choose(int number) {
    int result;
    do {
        result = inputInteger();
        if (result < 0 || result > number)
            std::cout << "Out of range\n";
    } while (result < 0 || result > number);

    return result;
}
