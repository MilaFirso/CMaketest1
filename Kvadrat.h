#pragma once
#include<iostream>
#include "Pryamoyg.h"
#include <string>


//����� �������
class Kvadrat :public Pryamoyg
{
protected:

	std::string name = "�������:";

public:
	Kvadrat()
	{
		std::string name;
		this->a = b;
		this->c = d;

	}
	Kvadrat(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->b = b;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "�������:";
		
		
	}
	void print_info() override;

};

