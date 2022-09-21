#pragma once
#include <string>
#include "KimStudent.h"
#include "KimGroup.h"

class Menu
{
public:
	
	void addStudent();

	void output();

	void readFromFile();

	void writeToFile();

	void clear();

private:
	KimGroup KimGroup;
};
