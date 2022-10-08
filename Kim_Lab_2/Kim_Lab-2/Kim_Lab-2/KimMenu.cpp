#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

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
    CFile file("text.dat", CFile::modeRead);
    group.writeToFile(file);
}

void KimMenu::writeToFile()
{
    std::cout << "Input file name:\n";
    std::cin >> fileName;
    CFile file("text.dat", CFile::modeCreate | CFile::modeWrite);
    group.readFromFile(file);

}

void KimMenu::clear()
{
    group.clear();
}

void KimMenu::addElder()
{
    student = new KimElder();
    (student)->input();
    group.addStudent(student);
}
