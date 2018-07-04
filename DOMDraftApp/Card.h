#pragma once
#include <SFML/Graphics.hpp>

class Card
{
	enum class Rarity
	{
		Common,
		Uncommun,
		Rare,
		Mythic


	};
public:
	Card( int number );

	unsigned char GetID() const;

	const sf::Texture& GetTexture() const;
	Rarity GetRarity() const;



	static constexpr int cardwidth = 205;
	static constexpr int cardheight = 294;

private:
	sf::Texture text;
	unsigned char id = 0;

	Rarity rarity;


};