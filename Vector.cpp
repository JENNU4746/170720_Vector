#include "stdafx.h"
#include "Vector.h"


CVector::CVector()
	:p(nullptr),size(0)
{
}


CVector::~CVector()
{
}

void CVector::push_back(int value)
{
	if (p)
	{
		int* temp = new int[++size];
		memcpy(temp, p, sizeof(int)*(size - 1));
		temp[size] = value;
		delete[](p);
		p = temp;
	}
	else
	{
		p = new int[++size];
		p[size-1] = value;
	}
}

void CVector::pop_back()
{
	if (!p)//지울 거 없어 돌아가
	{
		return;
	}
	else if (size == 1)//하나 남은 것까지 털어간다
	{
		delete[](p);
		size = 0;
	}
	else//2개 이상
	{
		size--;

	}
}

int& CVector::operator[](int index)
{
	if ((index < 0) || (index >= size))
	{
		return;
	}
	else
	{
		return p[index];
	}
}