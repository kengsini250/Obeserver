#pragma once
#include <string>

class Subject;
class Obeserver
{
public:
	virtual ~Obeserver() = default;
	virtual void update(const std::string&) = 0;
};
