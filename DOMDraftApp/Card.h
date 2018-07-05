#pragma once
#include <SFML/Graphics.hpp>

class Card
{
public:
	enum class Rarity
	{
		Common,
		Uncommun,
		Rare,
		Mythic
	};
	enum class Color
	{
		N, W, U, B, R, G, A
	};

public:
	Card( int number );

	unsigned char GetID() const;

	const sf::Texture& GetTexture() const;
	Rarity GetRarity() const;
	bool IsLegCreat() const;

	Color GetColor1() const;
	Color GetColor2() const;
	Color GetColor3() const;


	static constexpr int cardwidth = 205;
	static constexpr int cardheight = 294;

private:
	sf::Texture text;
	unsigned char id = 0;

	Rarity rarity;

	Color color1;
	Color color2;
	Color color3;

	bool legCreat;


};