#include <iostream>
#include <fstream>
#include "Group.h"

void Group::addStudent(KimStudent student)
{
	Group::vectorOfStudents.emplace_back(student);
}

void Group::output()
{
	for (int i = 0; i < Group::vectorOfStudents.size(); i++) {
		Group::vectorOfStudents.at(i).output();
	}
}

void Group::readFromFile(std::string fileName)
{
	std::ifstream file;
	
	fileName += ".txt";
	file.open(fileName);
	
	if (file.good()) {
		Group::clear();
		
		while (!file.eof()) {
			std::string type;
			std::string name;
			int age;

			file >> type;
			file >> name;
			file >> age;

			if (name != "") {
				Group::addStudent(KimStudent(name, age));
			}
		}
	}
}

void Group::writeToFile(std::string fileName)
{
	std::ofstream file;

	fileName += ".txt";
	file.open(fileName);

	if (file.good()) {
		for (int i = 0; i < Group::vectorOfStudents.size(); i++) {
			file << "Student:\n";
			file << Group::vectorOfStudents.at(i).getName() << "\n";
			file << Group::vectorOfStudents.at(i).getAge() << "\n";
		}
	}
}

void Group::clear()
{
	Group::vectorOfStudents.clear();
}
