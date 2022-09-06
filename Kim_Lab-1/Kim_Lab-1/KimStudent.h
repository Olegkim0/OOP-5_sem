#pragma once
#include <string>

class KimStudent
{
public:
	KimStudent();
	KimStudent(std::string name, int age);
	void input();
	void output();
	void writeToFile();
	void readFromFile();

private:

};

KimStudent::KimStudent()
{
}

KimStudent::~KimStudent()
{
}