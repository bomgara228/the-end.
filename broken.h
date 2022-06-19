#pragma once
#include "SFML/Graphics.hpp"

class Broken {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	static std::string damage_anim_files[];
	size_t frame = 0;
	size_t frame_delay = 120;
	sf::Vector2f position;
	bool del = false;
	sf::Clock clock;
public:
	Broken(sf::Vector2f pos);
	void update();
	void draw(sf::RenderWindow&);
	bool getDel();

};