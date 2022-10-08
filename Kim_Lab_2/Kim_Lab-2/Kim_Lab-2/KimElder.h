#pragma once
#include "pch.h"
#include "framework.h"

class KimElder : public KimStudent {
protected:
	boolean _isElder;

public:
	DECLARE_SERIAL(KimElder);

	KimElder();

	KimElder(std::string name, int age, float avgScore, boolean isElder);

	virtual void input();

	virtual void output();

	virtual void writeToFile(CFile& file);

	static KimStudent* readFromFile(CFile& file);

	virtual void Serialize(CArchive& ar);

};
IMPLEMENT_SERIAL(KimElder, KimStudent, VERSIONABLE_SCHEMA | 1)
