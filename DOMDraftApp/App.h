#pragma once
#include <SFML/Graphics.hpp>
#include <cassert>
#include <nlohmann/json.hpp>
#include "Card.h"
#include "Cardslot.h"
#include "Settings.h"


class App
{
public:
	App( sf::RenderWindow& window, Settings& settings );

	void ProcessEvents();
	void DrawGfx();

private:
	int GridxToScreen( int gridpos );
	int GridyToScreen( int gridpos );


	sf::RenderWindow& window;
	Settings& settings;

	std::vector<Cardslot> cardslots;
	std::vector<Card> allcards;
	std::vector<Card*> rares;
};