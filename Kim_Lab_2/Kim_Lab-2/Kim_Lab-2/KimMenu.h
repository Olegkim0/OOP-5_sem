#pragma once
#include "pch.h"
#include "framework.h"

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

	void addElder();
};
	