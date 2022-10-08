#include "framework.h"
#include "pch.h"

#pragma once

void KimMenu::addStudent()
{
	std::cout << "Is the student an elder? (0 - no, 1 - yes)\n";
	bool isElder = KimUtils::inputInteger();
	group.addStudent(isElder);
}

void KimMenu::output()
{
	group.output();
}

void KimMenu::readFromFile()
{
	std::cout << "Input file name: ";
	std::string fileName;
	std::cin >> std::ws;
	std::cin >> fileName;
	fileName = fileName + ".dat";
	group.readFromFile(fileName);
}

void KimMenu::writeToFile()
{
	std::cout << "Input file name: ";
	std::string fileName;
	std::cin >> std::ws;
	std::cin >> fileName;
	fileName = fileName + ".dat";
	group.writeToFile(fileName);
}

void KimMenu::clear()
{
	group.clear();
}
