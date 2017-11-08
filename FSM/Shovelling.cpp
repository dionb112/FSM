#include "Shovelling.h"

Shovelling::Shovelling()
{
}

Shovelling::~Shovelling()
{
}

void Shovelling::idle(Animation * a)
{
	std::cout << "To Idle from Shovelling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
