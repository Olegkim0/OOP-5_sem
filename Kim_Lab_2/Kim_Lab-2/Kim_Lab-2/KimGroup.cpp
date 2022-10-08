#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

void KimGroup::addStudent(KimStudent * student)
{
	KimGroup::vectorOfStudents.emplace_back(student);
}

void KimGroup::output()
{
	for (std::vector<KimStudent*>::iterator i = vectorOfStudents.begin(); i != vectorOfStudents.end(); i++) {
		(*i)->output();
	}
}

void KimGroup::readFromFile(CFile& file)
{
	int n;
	CArchive ar(&file, CArchive::load);
	
	ar >> n;

	for (int i = 0; i < n; i++) {
		KimStudent* student;
		ar >> student;
		vectorOfStudents.push_back(student);
	}
}

void KimGroup::writeToFile(CFile& file)
{
	CArchive ar(&file, CArchive::store);
	ar << vectorOfStudents.size();
	for (std::vector<KimStudent*>::iterator i = vectorOfStudents.begin(); i != vectorOfStudents.end(); i++) {
		(*i)->writeToFile(file);
	};
}

void KimGroup::clear()
{
	for (KimStudent* student : this->vectorOfStudents)
		delete student;
	this->vectorOfStudents.clear();
}