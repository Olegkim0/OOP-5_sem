#pragma once
#include <string>

class KimStudent
{
private:
	std::string _name;
	int _age;

public:
	KimStudent();

	KimStudent(std::string name, int age);
	
	~KimStudent();
	
	void input();

	void output();
	
	void writeToFile(std::string fileName);
	
	KimStudent readFromFile(std::string fileName);

	std::string getName();

	int getAge();
};