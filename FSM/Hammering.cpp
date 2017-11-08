#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "To Idle from Hammering" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
