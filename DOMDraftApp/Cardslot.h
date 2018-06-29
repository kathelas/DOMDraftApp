#pragma once
#include "Card.h"
#include <SFML/Graphics.hpp>

class Cardslot
{
public:
	Cardslot( Card& inputcard )
		:
		card( inputcard )
	{
		sprite.setTexture( card.GetTexture() );
	}

	void SetSpritePos( float x, float y )
	{
		sprite.setPosition( x, y );
	}
	void SetCard( Card& inputcard )
	{
		card = inputcard;
		sprite.setTexture( card.GetTexture() );
	}
	const sf::Sprite& GetSprite() const
	{
		return sprite;
	}

private:
	Card& card;
	sf::Sprite sprite;

};