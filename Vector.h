#pragma once

template <typename T>

class CVector
{
private:
	T* p;
	int size;

public:
	CVector()
		:p(nullptr), size(0) {};
	~CVector() {};

public:
	void push_back(T value)
	{
		if (p)
		{
			T* temp = new T[++size];
			memcpy(temp, p, sizeof(T)*(size - 1));
			temp[size - 1] = value;
			delete[](p);
			p = temp;
		}
		else
		{
			p = new T[++size];
			p[size - 1] = value;
		}
	};
	void pop_back()
	{
		if (!p)//���� �� ���� ���ư�
		{
			return;
		}
		else if (size == 1)//�ϳ� ���� �ͱ��� �о��
		{
			delete[](p);
			size = 0;
		}
		else//2�� �̻�
		{
			size--;

		}
	};
	int getSize() { return size; };

	T& operator[](int index)
	{
		if ((index < 0) || (index >= size))
		{
			T temp;
			return temp;
		}
		else
		{
			return p[index];
		}
	};
};

