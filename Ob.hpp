#pragma once
#include "Obeserver.h"
#include <iostream>

class A : public Obeserver
{
public:
	A(){}
	A(std::string s) { name = s; }
	virtual void update(const std::string& s)override
	{
		std::cout << name << " -> " << s << "\n";
	}
private:
	std::string name;
};
