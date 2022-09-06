#include <string>
#include <iostream>
#include <fstream>
#include <Kim_student.h>

class KimStudent
{
private:
	std::string _name;
	int _age;

public:
	KimStudent() {
		input();
	}

	KimStudent(std::string name, int age) {
		_name = name;
		_age = age;
	}

	void input() {
		std::cout << "Input name:";
		std::cin >> _name;
		std::cout << "Input age:";
		std::cin >> _age;
	}

	void output() {
		std::cout << "Age is " << std::to_string(_age);
		std::cout << "Name is " << _name;
	}

	void writeToFile() {
		std::string filename;
		std::cout << "Input filename";
		std::cin >> filename;
		filename = filename + ".txt";
		
		std::ofstream SavedFile(filename);
		SavedFile << "Student:";
		SavedFile << "Name is " << _name;
		SavedFile << "Age is " << _age;

		SavedFile.close();
	}

	void readFromFile() {
		
	}

};