// 170720_Vector.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <vector>

int main()
{
	std::vector<float> vec;
	//CVector<float> vec;
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i+0.1);
		std::cout << vec[i] << "\n";
	}
	int temp = vec.size();
	for (int i = temp - 1; i >= 0; i--)
	{
		vec.pop_back();
	}
	temp = vec.size();
	std::cout << temp << "\n";
    return 0;
}

