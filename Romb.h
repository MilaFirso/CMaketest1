#pragma once
#include<iostream>
#include "Parallelog.h"
#include <string>


//����� ����
class Romb :public Parallelog
{
protected:

	std::string name = "����:";

public:
	Romb()
	{
		std::string name;
		this->a = b;
		this->c = d;

	}
	Romb(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->b = b;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "����:";

		
	}
	void print_info() override;

};
