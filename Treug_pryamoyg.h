#pragma once
#include "Treug.h"
#include <iostream>
#include <string>


//����� ������������� �����������
class Treug_pryamoyg :public Treug
{
protected:
	std::string name = "������������� �����������";
public:
	Treug_pryamoyg()
	{
		std::string name = "������������� �����������";
		this->C = 90;
	}

	Treug_pryamoyg(int a, int b, int c, int A, int B, int C)
	{
		this->name = "������������� �����������";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;

		

	}

	void print_info() override;


};
