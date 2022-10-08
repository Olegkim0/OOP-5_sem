#include "pch.h"
#include "framework.h"
#include "KimElder.h"

KimElder::KimElder()
{
}

KimElder::~KimElder()
{
}

IMPLEMENT_SERIAL(KimElder, KimStudent, VERSIONABLE_SCHEMA | 1)

void KimElder::input() {
	KimStudent::input();
	std::cout << "Scholarship: ";
	_scholarship = KimUtils::inputInteger();
}

void KimElder::output() {
	KimStudent::output();
	std::cout << "scholarship: " << _scholarship << "\n";
}

void KimElder::Serialize(CArchive& arch) {
	KimElder::Serialize(arch);
	if (arch.IsStoring()) {
		arch << _scholarship;
	}
	else {
		arch >> _scholarship;
	}
}