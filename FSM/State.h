#ifndef STATE
#define STATE
#include <iostream>

class Animation;
class State
{
public:
	virtual void idle(Animation* a) { std::cout << "State::Idling" << std::endl; }
	virtual void jumping(Animation* a) { std::cout << "State::Jumping" << std::endl; }
	virtual void walking(Animation* a) { std::cout << "State::Walking" << std::endl; }
	virtual void hammering(Animation* a) { std::cout << "State::Hammering" << std::endl; }
	virtual void swording(Animation* a) { std::cout << "State::Swording" << std::endl; }
	virtual void shovelling(Animation* a) { std::cout << "State::Shovelling" << std::endl; }
};
#include "Animation.h" //for this class forward reference above is not enough, also need to include the header at the end here

#endif // !STATE

