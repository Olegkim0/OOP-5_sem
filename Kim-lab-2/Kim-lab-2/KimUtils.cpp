#include "framework.h"
#include "pch.h"

void KimUtils::printMenu()
{
    std::cout << "\n\nMenu:\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. Output\n";
    std::cout << "3. Write to file\n";
    std::cout << "4. Read from file\n";
    std::cout << "5. Clear\n";
    std::cout << "0. Exit\n\n";
}

int KimUtils::inputInteger() {
    std::string str;
    std::cin >> str;
    
    while (true) {
        if (str.find_first_not_of("0123456789") != std::string::npos) {
            std::cout << "Wrong input\n" << "Try again\n";
            
            std::cin >> str;

        }
        else {
            return stoi(str);
        }
    }

    std::cin.ignore();
    return -1;
}

double KimUtils::inputDouble() {
    std::string str;
    std::cin.ignore();
    std::cin >> str;
    while (true) {
        if (str.find_first_not_of("0123456789.") != std::string::npos || str.length() == count(str.begin(), str.end(), '.')) {
            std::cout << "Wrong input\n";
            std::cout << "Try again: \n";
            std::cin >> str;
        }
        else {
            return stod(str);
        }
    }

    return -1;
}

int KimUtils::choose(int number) {
    int result;
    do {
        result = inputInteger();
        if (result < 0 || result > number)
            std::cout << "Out of range\n";
    } while (result < 0 || result > number);

    return result;
}