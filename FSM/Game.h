// author Dion Buckley
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "Windows.h"

struct KeyBoardState
{
	bool A;
	bool D;
	bool W;
	bool Q;
	bool E;
	bool Space;
};

class Game
{
public:

	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:
	int m_pressed;
	bool m_anyPressed;

	KeyBoardState m_currentState;
	Animation fsm;

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

};

#endif // !GAME

