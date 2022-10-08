#pragma once
#include "pch.h"
#include "framework.h"

class KimStudent : public CObject
{
public:
	CString _name;
	int _age;
	float _avgScore;

public:
	DECLARE_SERIAL(KimStudent);

	KimStudent();

	~KimStudent();

	KimStudent(CString name, int age, float avgScore);

	virtual void input();

	virtual void output();

	virtual void Serialize(CArchive& ar);

};
