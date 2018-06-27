#pragma once
#include <SFML/Graphics.hpp>

class Card
{
public:
	Card( int number );

	unsigned char GetID() const;

	const sf::Sprite& GetSprite() const;




private:
	sf::Texture text;
	sf::Sprite sprite;
	unsigned char id = 0;

};