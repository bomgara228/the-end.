#include "broken.h"
#include "settings.h"
#include "game.h"

std::string Broken::damage_anim_files[] = {
	"getdmg1.png",
	"getdmg2.png",
	"getdmg3.png"
};

Broken::Broken(sf::Vector2f pos) {
	texture.loadFromFile(IMAGES_FOLDER + damage_anim_files[0]);
	sprite.setTexture(texture);
	position = pos;
	sprite.setPosition(position);
}
void Broken::update() {
	sf::Time now = clock.getElapsedTime();
	if (now.asMilliseconds() > frame_delay) {
		frame++;
		if (frame < 3) {
			clock.restart();
			texture.loadFromFile(IMAGES_FOLDER + damage_anim_files[frame]);
			sprite.setTexture(texture);
		}
		else {
			del = true;
		}
	}
}
bool Broken::getDel() { return del; }
void Broken::draw(sf::RenderWindow& window) { window.draw(sprite); }