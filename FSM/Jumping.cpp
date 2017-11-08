#include "Jumping.h"

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "To Idle from Jump" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
