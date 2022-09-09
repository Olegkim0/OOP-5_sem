#pragma once
#include "Group.h"
#include "Utils.h"
#include <iostream>

using namespace std;

int main()
{
    Group group = Group();
    KimStudent student;
    std::string fileName;

    while (true) {
        Utils::printMenu();
        switch (Utils::choose(5)) {
        case 0:
            std::cout << "\nExit\n";
            return 0;
        case 1:
            student.input();
            group.addStudent(student);
            break;
        case 2:
            group.output();
            break;
        case 3:
            std::cout << "Input file name:\n";
            std::cin >> fileName;
            group.writeToFile(fileName);
            break;
        case 4:
            std::cout << "Input file name:\n";
            std::cin >> fileName;
            group.readFromFile(fileName);
            break;
        case 5:
            group.clear();
            break;
        default:
            break;
        }
    }
    return 0;
}