#include <SFML/Graphics.hpp>
#include <vector>
#include <cassert>
#include "Card.h"
#include "Cardslot.h"
#include "Settings.h"

int GridxToScreen( int gridpos )
{
	return (Card::cardwidth * Cardslot::scale) * gridpos;
}

int GridyToScreen( int gridpos )
{
	return (Card::cardheight * Cardslot::scale) * gridpos;
}

int main()
{
	Settings settings;

	sf::RenderWindow window( sf::VideoMode( settings.GetWidth(), settings.GetHeight() ), "DraftApp" );
	

	std::vector<Card> allcards;
	allcards.reserve( 250 );
	for( int i = 1; i < 250; i++ )
	{
		allcards.emplace_back( i );
	}

	std::vector<Cardslot> cardslots;
	{
		int rowlength = settings.GetWidth() / (Card::cardwidth * Cardslot::scale);

		for( int i = 0; i < 14; i++ )
		{
			int gridx = i % rowlength;
			int gridy = i / rowlength;


			cardslots.emplace_back( allcards[0] );

			int x = GridxToScreen( gridx );
			int y = GridyToScreen( gridy );
			assert( x >= 0 && x <= settings.GetWidth() + (Card::cardwidth * Cardslot::scale) );
			assert( y >= 0 && y <= settings.GetHeight() + (Card::cardheight * Cardslot::scale) );
			cardslots[i].SetSpritePos( x, y );
		}
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