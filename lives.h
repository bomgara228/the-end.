#pragma once
#include "SFML/Graphics.hpp"

class Lives {
private:
	sf::Texture texture1;
	sf::Sprite sprite1;
	sf::Texture texture2;
	sf::Sprite sprite2;
	sf::Texture texture3;
	sf::Sprite sprite3;
	int amount = 3;
	float rass = 450;
public:
	Lives();
	void update();
	void draw(sf::RenderWindow&);
	void spawn();
	void decreaceAmount(int);
	int howMuch();
	void init();
};