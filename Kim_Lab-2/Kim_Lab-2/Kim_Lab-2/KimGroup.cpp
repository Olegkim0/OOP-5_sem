#include <iostream>
#include <fstream>
#include "KimGroup.h"

void KimGroup::addStudent(KimStudent* student)
{
	KimGroup::vectorOfStudents.emplace_back(student);
}

void KimGroup::output()
{
	for (std::vector<KimStudent*>::iterator i = vectorOfStudents.begin(); i != vectorOfStudents.end(); i++) {
		(*i)->output();
	}
}

void KimGroup::readFromFile(std::string fileName)
{
	fileName += ".txt";
	std::ifstream file;
	file.open(fileName);

	if (file.good()) {
		std::string type;
		file >> type;

		while (!file.eof()) {
			if (type == "Student:") {
				KimGroup::addStudent(KimStudent::readFromFile(file));
			}
			file >> type;
		}
	}
	else {
		std::cout << "File not found 404 :(";
	}
	file.close();
}

void KimGroup::writeToFile(std::string fileName)
{
	fileName += ".txt";
	std::ofstream file;
	file.open(fileName);

	if (file.good()) {
		for (std::vector<KimStudent*>::iterator i = vectorOfStudents.begin(); i != vectorOfStudents.end(); i++) {
			(*i)->writeToFile(file);
		}
	}
	else {
		std::cout << "File not found 404 :(";
	}
	file.close();
}

void KimGroup::clear()
{
	for (KimStudent* student : this->vectorOfStudents)
		delete student;
	this->vectorOfStudents.clear();
}
