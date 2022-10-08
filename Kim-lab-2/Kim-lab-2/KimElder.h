#pragma once
#include "pch.h"
#include "framework.h"

class KimElder : public KimStudent {
protected:
	int _scholarship;

public:
	DECLARE_SERIAL(KimElder);

	KimElder();

	~KimElder();

	virtual void input();

	virtual void output();

	virtual void Serialize(CArchive& ar);

};
