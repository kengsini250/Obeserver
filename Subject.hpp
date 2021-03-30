#pragma once

#include <vector>
#include "Obeserver.h"

using namespace std;
class Subject
{
public:
	void attach(Obeserver* p)
	{
		obj.push_back(p);
	}

	void notify()
	{
		for (auto& i : obj) {
			i->update("test");
		}
	}
private:
	Obeserver* ob;
	vector<Obeserver*> obj;
};
