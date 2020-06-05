#pragma once
#include <iostream>
using namespace std;

class Base 
{
public: 
	virtual void who()
			{
		cout << "Base\n";
			}
};
class first_d : public Base
{
public:
	void who()
	{
		cout << "First derivation\n";
	}

};

class second_d : public Base
{
public:
	void who()
	{
		cout << "Second derivation\n";
	}
};
