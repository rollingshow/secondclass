// secondclass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "base.h"
using namespace std;


int main(void)
{
	Base base_obj;
	Base *p;
	first_d first_obj;
	second_d second_obj;
	p = &base_obj;
	p->who();
	p = &first_obj;
	p->who();
	p = &second_obj;
	p->who();
}

