#pragma once
#include <SFML/Graphics.hpp>

class Card
{
public:
	Card( int number );

	unsigned char GetID() const;

	const sf::Texture& GetTexture() const;




private:
	sf::Texture text;
	unsigned char id = 0;

};