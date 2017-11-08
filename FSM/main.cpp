/// <summary>
/// simple game loop project for SFML[2.4.2]
/// 
/// @author Dion Buckley
/// @date Oct / Nov 2017
/// 
/// Known Bugs: If user tries to hold multiple keys state will shift to newest as appropriate.
///				However, when releasing newer keys state will not always currectly shift back to previous state
///				Sometimes it works as expected and sometimes it gets caught up or stuck altogether.
/// </summary>


#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "Game.h"

/// <summary>
/// main entry point
/// </summary>
int main()
{
	Game game;
	game.run();
	
	return 0;
}