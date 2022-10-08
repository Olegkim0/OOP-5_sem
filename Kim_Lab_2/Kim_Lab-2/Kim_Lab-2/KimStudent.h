#pragma once
#include "pch.h"
#include "framework.h"

class KimStudent: public CObject
{
public:
	std::string _name;
	int _age;
	float _avgScore;

public:
	DECLARE_SERIAL(KimStudent);

	KimStudent();

	KimStudent(std::string name, int age, float avgScore);

	~KimStudent();

	virtual void input();

	virtual void output();

	// void writeToFile(std::ofstream& fileName);
	virtual void writeToFile(CFile& file);

	//static KimStudent* readFromFile(std::ifstream& file);
	static KimStudent* readFromFile(CFile& file);

	virtual void Serialize(CArchive& ar);

};
IMPLEMENT_SERIAL(KimStudent, CObject, 1);
