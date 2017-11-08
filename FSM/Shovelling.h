#ifndef SHOVELLING
#define SHOVELLING

#include "State.h"
class Animation;

class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();
	void idle(Animation* a);
};

#endif // !SHOVELLING
