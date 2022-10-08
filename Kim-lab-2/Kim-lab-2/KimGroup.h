#pragma once
#include "pch.h"
#include "framework.h"

class KimGroup {
private:
	std::vector<std::shared_ptr<KimStudent>> vectorOfStudents;

public:

	KimGroup();

	~KimGroup();

	void addStudent(boolean isElder);

	void output();

	void readFromFile(std::string fileName);

	void writeToFile(std::string fileName);

	void clear();
};