//@author Dion Buckley
#ifndef ANIMATION
#define ANIMATION

#include "Idle.h"

class Animation
{
	class State * current;
public:
	Animation();
	void setCurrent(State * s) { current = s; }
	void idle();
	void swording();
	void shovelling();
	void jumping();
	void walking();
	void hammering();
};

#endif //!ANIMATION