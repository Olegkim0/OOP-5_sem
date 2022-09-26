#include "KimMenu.h"
#include <iostream>

void KimMenu::addStudent()
{
    student = new KimStudent();
    (student)->input();
    group.addStudent(student);
}

void KimMenu::output()
{
    group.output();
}

void KimMenu::readFromFile()
{
    std::cout << "Input file name:\n";
    std::cin >> fileName;
    group.writeToFile(fileName);
}

void KimMenu::writeToFile()
{
    std::cout << "Input file name:\n";
    std::cin >> fileName;
    group.readFromFile(fileName);

}

void KimMenu::clear()
{
    group.clear();
}

