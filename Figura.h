#pragma once
#include<iostream>

// ����� ������� ������
class Figura
{
protected: std::string name = "������";

public:	Figura()
{
	std::string name;
}

	  std::string get_name();


	  virtual void print_info();


};

