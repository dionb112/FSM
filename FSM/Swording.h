#ifndef SWORDING
#define SWORDING

#include "State.h"
class Animation;

class Swording : public State
{
public:
	Swording();
	~Swording();
	void idle(Animation* a);
};

#endif // !SWORDING
