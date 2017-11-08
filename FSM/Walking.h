#ifndef WALKING
#define WALKING

#include "State.h"
class Animation;

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(Animation* a);
};

#endif // !WALKING

