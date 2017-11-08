#include "Walking.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "To Idle from Walk" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
