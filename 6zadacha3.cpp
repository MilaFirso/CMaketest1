#include <iostream>
#include <string>
#include "Figura.h"
#include "Treug.h"
#include "Treug_pryamoyg.h"
#include "Treug_ravnobed.h"
#include "Treug_ravnostor.h"
#include "Cheterexyg.h"
#include "Pryamoyg.h"
#include "Kvadrat.h"
#include "Parallelog.h"
#include "Romb.h"
#include <tchar.h>



//Функция печати
void print_info(Figura* a)
{
	a->print_info();
};

int main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");

		Treug treug;
		print_info(&treug);
	
		Treug_pryamoyg treug_pryamoyg;
		print_info(&treug_pryamoyg);
	
		Treug_ravnobed treug_ravnobed;
		print_info(&treug_ravnobed);
		
		Treug_ravnostor treug_ravnostor;
		print_info(&treug_ravnostor);
		
		Cheterexyg сheterexyg;
		print_info(&сheterexyg);
		
		Pryamoyg pryamoyg;
		print_info(&pryamoyg);
		
		Kvadrat kvadrat;
		print_info(&kvadrat);
		
		Parallelog parallelog;
		print_info(&parallelog);
		
		Romb romb;
		print_info(&romb);
		


	return 0;

}
