#pragma once
#include "pch.h"
#include "framework.h"

class KimGroup {
private:
	std::vector<KimStudent*> vectorOfStudents;

public:
	void addStudent(KimStudent* student);

	void output();

	void readFromFile(CFile& file);

	void writeToFile(CFile& file);

	void clear();
};