#ifndef IDLE
#define IDLE

#include "State.h"
class Animation; //forward reference

class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void swording(Animation* a);
	void shovelling(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
};
#endif // !IDLE
