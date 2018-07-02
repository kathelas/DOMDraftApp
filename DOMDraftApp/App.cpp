#include "App.h"


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

	for( auto card : cardslots )
	{
		window.draw( card.GetSprite() );
	}
	window.display();
}
