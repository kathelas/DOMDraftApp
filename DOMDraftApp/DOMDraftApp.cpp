#include <SFML/Graphics.hpp>
#include <vector>
#include "Card.h"

int main()
{
	sf::RenderWindow window( sf::VideoMode( 800, 600 ), "DraftApp" );
	
	/*
	std::vector<sf::Texture> textvec(5);

	textvec[0].loadFromFile( "DOMScans\\forest.jpg" );
	textvec[1].loadFromFile( "DOMScans\\island.jpg" );
	textvec[2].loadFromFile( "DOMScans\\mountain.jpg" );
	textvec[3].loadFromFile( "DOMScans\\plains.jpg" );
	textvec[4].loadFromFile( "DOMScans\\swamp.jpg" );

	std::vector<sf::Sprite> spritevec(5);
	
	
	for( int i = 0; i < 5; i++ )
	{
		spritevec[i].setTexture( textvec[i] );
		spritevec[i].setScale( 0.5f, 0.5f );
		spritevec[i].move( float( 103 * i ), 0 );
	}
	*/

	Card card( 100 );




	while( window.isOpen() )
	{
		sf::Event event;
		while( window.pollEvent( event ) )
		{
			if( event.type == sf::Event::Closed )
				window.close();
		}

		window.clear();
		
		window.draw( card.GetSprite() );

		window.display();
	}

	return 0;
}