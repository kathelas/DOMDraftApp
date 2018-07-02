#pragma once
#include <SFML/Graphics.hpp>
#include "Cardslot.h"

class App
{
public:
	App( sf::RenderWindow& window, std::vector<Cardslot>& cardslots )
		:
		window( window ),
		cardslots( cardslots )
	{}

	void ProcessEvents();
	void DrawGfx();

private:
	sf::RenderWindow& window;
	std::vector<Cardslot>& cardslots;

};