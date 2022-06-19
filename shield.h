#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"


class Shield {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float os_x = 900;
	float os_y = 1000;
public:
	Shield();
	void update();
	void draw(sf::RenderWindow&);
	void peremes(float as, float os);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
};