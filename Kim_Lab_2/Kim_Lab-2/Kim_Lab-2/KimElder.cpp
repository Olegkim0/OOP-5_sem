#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

KimElder::KimElder(std::string name, int age, float avgScore, boolean isElder)
{
	_name = name;
	_age = age;
	_avgScore = avgScore;
	_isElder = true;
}

void KimElder::input()
{
	std::cout << "Input name:";
	std::cin >> _name;
	std::cout << "Input age:";
	_age = KimUtils::inputInteger();
	std::cout << "Input average score:";
	_avgScore = KimUtils::inputDouble();
	std::cout << "Input elder's info:";
	std::cin >> _isElder;
}

void KimElder::output()
{
    std::cout << "Student:\n"
        << "Name is " << _name << "\n"
        << "Age is " << std::to_string(_age) << "\n"
        << "Average score is " << std::to_string(_avgScore) << "\n"
		<< "Info is " << _isElder << "\n\n";
}

void KimElder::writeToFile(CFile& file)
{
	CArchive ar(&file, CArchive::store);

	ar << "Student:\n";
	//ar << _name << "\n";
	ar << _age << "\n";
	ar << _avgScore << "\n";
	//ar << _info << "\n";
}

KimStudent* KimElder::readFromFile(CFile& file)
{
	CArchive ar(&file, CArchive::load);
	KimElder* student = new KimElder("", 0, 0, true);
	ar >> student->_age;
	ar >> student->_avgScore;

	return student;
}

void KimElder::Serialize(CArchive& ar)
{
	KimStudent::Serialize(ar);
	if (ar.IsStoring())
	{
		ar << KimElder::_age;
	}
	else
	{
		ar >> KimElder::_age;
		{
			if (ar.GetObjectSchema() > 0)
			{
				ar >> KimElder::_age;
			}
		}
	}
}
#pragma endregion