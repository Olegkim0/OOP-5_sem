#pragma once
#include <vector>
#include "KimStudent.h"


class Group {
private:
	std::vector<KimStudent> vectorOfStudents;

public:
	void addStudent(KimStudent student);

	void output();

	void readFromFile(std::string fileName);

	void writeToFile(std::string fileName);

	void clear();

};