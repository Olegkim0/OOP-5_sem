#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

void KimUtils::printMenu()
{
    std::cout << "\n\nMenu:\n"
        << "1. Add Student\n"
        << "2. Output\n"
        << "3. Write ot file\n"
        << "4. Read from file\n"
        << "5. Clear\n"
        << "6. Add elder\n"
        << "0. Exit\n\n";
}

int KimUtils::inputInteger() {
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

double KimUtils::inputDouble() {
    std::string str;
    std::cin.ignore();
    std::cin >> str;
    if (str.find_first_not_of("0123456789.") != std::string::npos || str.length() == count(str.begin(), str.end(), '.')) {
        std::cout << "Wrong input\n";
        std::cout << "Try again: \n";
    }
    else {
        return stod(str);
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
