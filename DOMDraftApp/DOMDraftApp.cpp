#include <SFML/Graphics.hpp>
#include <vector>
#include <cassert>
#include "Card.h"
#include "Cardslot.h"
#include "Settings.h"
#include "App.h"

int GridxToScreen( int gridpos )
{
	return int( (Card::cardwidth * Cardslot::scale) * gridpos );
}

int GridyToScreen( int gridpos )
{
	return int( (Card::cardheight * Cardslot::scale) * gridpos );
}

int main()
{
	Settings settings;

	sf::RenderWindow window( sf::VideoMode( settings.GetWidth(), settings.GetHeight() ), "DraftApp", sf::Style::Titlebar | sf::Style::Close );

	App app( window, settings );




	while( window.isOpen() )
	{
		app.ProcessEvents();

		app.DrawGfx();
	}

	return 0;
}