#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include "KimStudent.h"
#include "KimGroup.h"
#include "Utils.h"

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
    _age = Utils::inputInteger();
    std::cout << "Input average score:";
    _avgScore = Utils::inputDouble();
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
    std::string type;
    std::string name;
    int age;
    float avgScore;

    if (file.good()) {
        file >> type;
        if (type == "Student:") {
            file >> name;
            file >> age;
            file >> avgScore;
        }
        else {
            return new KimStudent();
        }
    }
    else {
        std::cout << "File not found 404 :(";
    }

    return new KimStudent(name, age, avgScore);
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

