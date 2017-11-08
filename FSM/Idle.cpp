#include "Idle.h"
#include <iostream>

Idle::Idle()
{

}

Idle::~Idle()
{
}

void Idle::jumping(Animation * a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swording(Animation * a)
{
	std::cout << "Swording" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shovelling(Animation * a)
{
	std::cout << "Shovelling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Hammering" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}