#include "shield.h"
#include "settings.h"

Shield::Shield() {
	texture.loadFromFile(IMAGES_FOLDER + PLAYER_SHIELD);
	sprite.setScale(0.3f, 0.3f);
	sprite.setTexture(texture);
	texture.setSmooth(true);

}
void Shield::update() {
	sprite.setPosition(os_x, os_y);
}
void Shield::peremes(float as, float os) { os_x = as, os_y = os; }
void Shield::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Shield::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Shield::getPosition() { return sprite.getPosition(); }