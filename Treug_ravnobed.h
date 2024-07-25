#pragma once
#include "Treug.h"
#include <iostream>
#include <string>

// Класс равнобедренный треугольник
class Treug_ravnobed :public Treug
{
protected:
	std::string name = "Равнобедренный треугольник";
public:
	Treug_ravnobed()
	{
		std::string name = "Равнобедренный треугольник:";
		this->c = a;
	}

	Treug_ravnobed(int a, int b, int c, int A, int B, int C)
	{
		this->name = "Равнобедренный треугольник:";
		this->a = a;
		this->b = b;
		this->c = a;
		this->A = A;
		this->B = B;
		this->C = C;

		

	}

	void print_info() override;

};
