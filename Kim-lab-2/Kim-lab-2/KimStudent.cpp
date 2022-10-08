#include "pch.h"
#include "framework.h"

KimStudent::KimStudent()
{
}

KimStudent::~KimStudent() {
}
IMPLEMENT_SERIAL(KimStudent, CObject, 1);

KimStudent::KimStudent(CString name, int age, float avgScore) {
    _name = name;
    _age = age;
    _avgScore = avgScore;
}


void KimStudent::input() {
    std::cout << "Input name:";
    std::string strName;
    std::cin >> strName;
    _name = strName.c_str();
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


void KimStudent::Serialize(CArchive& ar) {
    if (ar.IsStoring())
    {
        ar << _name << _age << _avgScore;
    }
    else
    {
        ar >> _name >> _age >> _avgScore;
    }
}

/*
KimStudent::KimStudent() {
    input();
}
*/

