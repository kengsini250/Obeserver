#include "Subject.hpp"
#include "Ob.hpp"

int main()
{
	Subject s;
	A a1("a1"), a2("a2"), a3("a3");
	s.attach(&a1);
	s.attach(&a2);
	s.attach(&a3);
	s.notify();
}