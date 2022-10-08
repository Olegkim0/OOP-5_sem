#include "pch.h"
#include "framework.h"

#pragma region MFC Serialization

KimGroup::KimGroup()
{
}

KimGroup::~KimGroup()
{
}

void KimGroup::addStudent(boolean isElder)
{
	std::shared_ptr<KimStudent> student;
	if (isElder) {
		student = std::make_shared<KimElder>();
	}
	else {
		student = std::make_shared<KimStudent>();
	}
	(*student).input();
	vectorOfStudents.push_back(student);
}

void KimGroup::output()
{
	std::cout << std::endl;

	for (auto i = vectorOfStudents.begin(); i < vectorOfStudents.end(); ++i)
		(*i)->output();
}

void KimGroup::readFromFile(std::string file_name) {
	vectorOfStudents.clear();
	CFile file((LPCTSTR)(file_name.c_str()), CFile::modeRead);
	CArchive arch(&file, CArchive::load);
	int size, n;
	arch >> size;

	// comment if error
	arch >> n;
	for (int i = 0; i < size; i++) {
		KimStudent* student = new KimStudent();
		arch >> student;
		std::shared_ptr<KimStudent> shared_ukaz(student);
		vectorOfStudents.push_back(shared_ukaz);
	}

	arch.Close();
	file.Close();
}

void KimGroup::writeToFile(std::string file_name) {
	CFile file((LPCTSTR)(file_name.c_str()), CFile::modeCreate | CFile::modeWrite);
	CArchive arch(&file, CArchive::store);
	arch << vectorOfStudents.size();
	for (auto student : vectorOfStudents)  arch << student.get();
	arch.Close();
	file.Close();
}

void KimGroup::clear()
{
	for (auto student : vectorOfStudents) *student;
	vectorOfStudents.clear();
}