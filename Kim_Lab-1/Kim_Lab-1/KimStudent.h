#pragma once
#include <string>

class KimStudent
{
private:
	std::string _name;
	int _age;
	float _avgScore;

public:
	KimStudent();

	KimStudent(std::string name, int age, float avgScore);
	
	~KimStudent();
	
	void input();

	void output();
	
	void writeToFile(std::ofstream& fileName);
	
	static KimStudent* readFromFile(std::ifstream& file);

	std::string getName();

	int getAge();

	float getAvgScore();
};