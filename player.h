#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	int hp = 100;
	int amount = 0;
	int rasstoyan = 440;
	float damage = 1;
public:
	Player();
	void update();
	void draw(sf::RenderWindow& window);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	void decreaseHp(size_t);
	void increaseHp(size_t);
	int getHp();
	int dmg();
	void increaseDamage(float);
	void decreaseDamage();
	void Color(int);
	void nachalHp();
	void lowhp();
	void init();
};