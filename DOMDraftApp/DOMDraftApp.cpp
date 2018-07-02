#include <SFML/Graphics.hpp>
#include <vector>
#include "Card.h"
#include "Cardslot.h"
#include "Settings.h"

int main()
{
	Settings settings;

	sf::RenderWindow window( sf::VideoMode( settings.GetWidth(), settings.GetWidth() ), "DraftApp" );
	

	std::vector<Card> allcards;
	for( int i = 1; i < 250; i++ )
	{
		allcards.emplace_back( i );
	}

	std::vector<Cardslot> cardslots;
	for( int i = 0; i < 5; i++ )
	{
		cardslots.emplace_back( allcards[0] );
		cardslots[i].SetSpritePos( (Card::cardwidth * Cardslot::scale) * i, 0.0f );
	}

	while( window.isOpen() )
	{
		sf::Event event;
		while( window.pollEvent( event ) )
		{
			if( event.type == sf::Event::Closed )
				window.close();
		}

		window.clear();
		
		for( auto card : cardslots )
		{
			window.draw( card.GetSprite() );
		}
		window.display();
	}

	return 0;
}