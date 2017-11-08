#ifndef JUMPING
#define JUMPING

#include "State.h"
class Animation;

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a);
};

#endif // !JUMPING
