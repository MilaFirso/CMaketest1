#pragma once
#include<iostream>
#include "Figura.h"


//Класс треугольник
class Treug :public Figura

{
protected:
	int a = 10;
	int b = 20;
	int c = 30;
	int A = 50;
	int B = 60;
	int C = 70;
	std::string name = "Треугольник";

public:
	Treug()
	{
		std::string name;
	}
	Treug(int a, int b, int c, int A, int B, int C)
	{
		this->name = "Треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;


	}

	void print_info() override;


};
