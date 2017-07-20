#pragma once
class CVector
{
private:
	int* p;
	int size;

public:
	CVector();
	~CVector();

public:
	void push_back(int value);
};

