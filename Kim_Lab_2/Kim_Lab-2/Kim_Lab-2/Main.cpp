#pragma once
#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

int main()
{
    KimMenu menu = KimMenu();

    while (true) {
        KimUtils::printMenu();
        switch (KimUtils::choose(5)) {
        case 0:
            std::cout << "\nExit\n";
            return 0;
        case 1:
            menu.addStudent();
            break;
        case 2:
            menu.output();
            break;
        case 3:
            menu.readFromFile();
            break;
        case 4:
            menu.writeToFile();
            break;
        case 5:
            menu.clear();
            break;
        default:
            break;
        }
    }
    return 0;
}