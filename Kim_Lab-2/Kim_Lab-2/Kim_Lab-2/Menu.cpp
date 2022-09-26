#include "Menu.h"
#include <iostream>

void Menu::addStudent()
{
    student = new KimStudent();
    (student)->input();
    group.addStudent(student);
}

void Menu::output()
{
    group.output();
}

void Menu::readFromFile()
{
    std::cout << "Input file name:\n";
    std::cin >> fileName;
    group.writeToFile(fileName);
}

void Menu::writeToFile()
{
    std::cout << "Input file name:\n";
    std::cin >> fileName;
    group.readFromFile(fileName);

}

void Menu::clear()
{
    group.clear();
}

