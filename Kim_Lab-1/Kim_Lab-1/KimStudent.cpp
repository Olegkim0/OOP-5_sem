#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include "KimStudent.h"
#include "Group.h"

KimStudent::KimStudent()
{
}

KimStudent::KimStudent(std::string name, int age) {
    _name = name;
    _age = age;
}

KimStudent::~KimStudent() { }

void KimStudent::input() {
    std::cout << "Input name:";
    std::cin >> _name;
    std::cout << "Input age:";
    std::cin >> _age;
}

void KimStudent::output() {
    std::cout << "Student:\n";
    std::cout << "Name is " << _name << "\n";
    std::cout << "Age is " << std::to_string(_age) << "\n";
}

void KimStudent::writeToFile(std::string fileName) {

    std::ofstream file;

    fileName += ".txt";
    file.open(fileName);

    if (file.good()) {
	    file << "Student:\n";
        file << _name << "\n";
        file << _age << "\n";

        file.close();
    }
}

KimStudent KimStudent::readFromFile(std::string fileName)
{
    std::ifstream file;

    fileName += ".txt";
    file.open(fileName);
    
    std::string type;
    std::string name;
    int age;

    if (file.good()) {
        file >> type;
        file >> name;
        file >> age;
    }

    return KimStudent(name, age);
}

std::string KimStudent::getName()
{
    return _name;
}

int KimStudent::getAge()
{
    return _age;
}

/*
KimStudent::KimStudent() {
    input();
}
*/

