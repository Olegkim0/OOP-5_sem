#pragma once
#include <string>
#include "KimStudent.h"
#include "KimGroup.h"

class KimMenu
{
private:
	KimGroup group = KimGroup();
	KimStudent* student;
	std::string fileName;

public:

	void addStudent();

	void output();

	void readFromFile();

	void writeToFile();

	void clear();
};