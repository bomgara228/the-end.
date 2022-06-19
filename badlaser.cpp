#include "badlaser.h"
#include "settings.h"

Badlaser::Badlaser(float x, float y) {
	texture.loadFromFile(IMAGES_FOLDER + BAD_LASER_FILE_NAME);
	sprite.setTexture(texture);
	texture.setSmooth(true);
	sprite.setScale(2.3f, 1.5f);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	sprite.setPosition(x - g_bounds.width / 2, y - g_bounds.height / 2);
}
void Badlaser::update() {
	sprite.move(X_LASER_SPEED, -LASER_SPD);
}
void Badlaser::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Badlaser::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Badlaser::getPosition() { return sprite.getPosition(); }
void Badlaser::setDel(bool a) { del = a; }
bool Badlaser::getDel() { return del; }
void Badlaser::setSpeed(float speed_x, float speed_y) { X_LASER_SPEED = speed_x, LASER_SPD = speed_y; }