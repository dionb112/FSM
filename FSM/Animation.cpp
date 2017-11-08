//@author Dion Buckley
#include "Animation.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::swording()
{
	current->swording(this);
}

void Animation::shovelling()
{
	current->shovelling(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

