#include "App.h"


App::App( sf::RenderWindow& window, Settings& settings )
	:
	window( window ),
	settings( settings )
{

	allcards.reserve( 250 );
	for( int i = 1; i < 250; i++ )
	{
		allcards.emplace_back( i );
	}

	
	int rowlength = int( settings.GetWidth() / (Card::cardwidth * Cardslot::scale) );

	cardslots.reserve( 14 );
	for( int i = 0; i < 14; i++ )
	{
		int gridx = i % rowlength;
		int gridy = i / rowlength;


		cardslots.emplace_back( allcards[0] );

		int x = GridxToScreen( gridx );
		int y = GridyToScreen( gridy );
		assert( x >= 0 && x <= settings.GetWidth() + (Card::cardwidth * Cardslot::scale) );
		assert( y >= 0 && y <= settings.GetHeight() + (Card::cardheight * Cardslot::scale) );
		cardslots[i].SetSpritePos( (float)x, (float)y );
	}
}

void App::ProcessEvents()
{
	sf::Event event;
	while( window.pollEvent( event ) )
	{
		if( event.type == sf::Event::Closed )
			window.close();
	}
}

void App::DrawGfx()
{
	window.clear();
	//-----

	for( auto card : cardslots )
	{
		window.draw( card.GetSprite() );
	}

	//-----
	window.display();
}

int App::GridxToScreen( int gridpos )
{
	return int( (Card::cardwidth * Cardslot::scale) * gridpos );
}

int App::GridyToScreen( int gridpos )
{
	return int( (Card::cardheight * Cardslot::scale) * gridpos );
}
