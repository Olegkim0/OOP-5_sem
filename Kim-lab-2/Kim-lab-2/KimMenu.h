#pragma once
#include "framework.h"

class KimMenu
{
public:

	void addStudent();

	void output();

	void readFromFile();

	void writeToFile();

	void clear();

private:
	KimGroup group;
};