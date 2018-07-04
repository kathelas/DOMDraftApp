#include "Card.h"
#include <string>
#include <sstream>
#include <cassert>

Card::Card( int number )
{
	assert( number > 0 && number < 250 );

	//prob a better way to do this, but it works ...
	id = (unsigned char) number;
	std::string numberstring;
	std::stringstream ss;
	ss << number;
	ss >> numberstring;

	if( number < 10 )
	{
		text.loadFromFile( "DOMScans\\00" + numberstring + ".full.jpg" );
	}
	else if( number < 100 )
	{
		text.loadFromFile( "DOMScans\\0" + numberstring + ".full.jpg" );
	}
	else
	{
		text.loadFromFile( "DOMScans\\" + numberstring + ".full.jpg" );
	}


}

unsigned char Card::GetID() const
{
	return id;
}

const sf::Texture& Card::GetTexture() const
{
	return text;
}

Card::Rarity Card::GetRarity() const
{
	return rarity;
}
