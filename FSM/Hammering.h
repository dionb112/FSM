#ifndef HAMMERING
#define HAMMERING

#include "State.h"
class Animation;

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(Animation* a);
};

#endif // !HAMMERING
