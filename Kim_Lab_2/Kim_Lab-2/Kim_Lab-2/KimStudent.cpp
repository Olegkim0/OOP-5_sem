#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

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
    std::cout << "Student:\n"
        << "Name is " << _name << "\n"
        << "Age is " << std::to_string(_age) << "\n"
        << "Average score is " << std::to_string(_avgScore) << "\n\n";
}

//void KimStudent::writeToFile(std::ofstream& file)
void KimStudent::writeToFile(CFile& file)
{
    CArchive ar(&file, CArchive::store);
    
    ar << "Student:\n";
    //ar << _name << "\n";
    ar << _age << "\n";
    ar << _avgScore << "\n";


    /*
    std::cout << "=====================================================";
    if (file.good()) {
        file << "Student:\n";
        file << _name << "\n";
        file << _age << "\n";
        file << _avgScore << "\n";
    }
    else {
        std::cout << "File not found 404 :(";
    }
    */
}

//KimStudent* KimStudent::readFromFile(std::ifstream& file)
KimStudent* KimStudent::readFromFile(CFile& file)
{
    CArchive ar(&file, CArchive::load);
    KimStudent* student = new KimStudent("",0,0);
    ar >> student->_age;
    ar >> student->_avgScore;
    
    return student;

    /*
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
    */

}

void KimStudent::Serialize(CArchive& ar) {
    if (ar.IsStoring())
    {
        ar << _age;
    }
    else
    {
        ar >> _age;
    }
}

/*
KimStudent::KimStudent() {
    input();
}
*/

