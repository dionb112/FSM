#include "Swording.h"

Swording::Swording()
{
}

Swording::~Swording()
{
}

void Swording::idle(Animation * a)
{
	std::cout << "To Idle from Swoding" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
