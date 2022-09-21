#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include "KimStudent.h"
#include "KimGroup.h"
#include "KimUtils.h"

KimStudent::KimStudent()
{
}

KimStudent::KimStudent(std::string name, int age, float avgScore) {
    _name = name;
    _age = age;
    _avgScore = avgScore;
}

KimStudent::~KimStudent() { }

void KimStudent::input() {
    std::cout << "Input name:";
    std::cin >> _name;
    std::cout << "Input age:";
    _age = KimUtils::inputInteger();
    std::cout << "Input average score:";
    _avgScore = KimUtils::inputDouble();
}

void KimStudent::output() {
    std::cout << "Student:\n";
    std::cout << "Name is " << _name << "\n";
    std::cout << "Age is " << std::to_string(_age) << "\n";
    std::cout << "Average score is " << std::to_string(_avgScore) << "\n\n";
}

void KimStudent::writeToFile(std::ofstream& file) 
{
    if (file.good()) {
	    file << "Student:\n";
        file << _name << "\n";
        file << _age << "\n";
        file << _avgScore << "\n";
    }
    else {
        std::cout << "File not found 404 :(";
    }
}

KimStudent* KimStudent::readFromFile(std::ifstream& file)
{

    KimStudent* student = new KimStudent();

    if (file.good()) {
        file >> student->_name;
        file >> student->_age;
        file >> student->_avgScore;
    }
    else {
        std::cout << "File not found 404 :(";
    }

    return student;
}

std::string KimStudent::getName()
{
    return _name;
}

int KimStudent::getAge()
{
    return _age;
}

float KimStudent::getAvgScore() {
    return _avgScore;
}

/*
KimStudent::KimStudent() {
    input();
}
*/

