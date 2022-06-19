#include "player.h"
#include "settings.h"
#include <SFML/Graphics.hpp>

Player::Player() {
	texture.loadFromFile(IMAGES_FOLDER + PLAYER_FILE_NAME);
	sprite.setTexture(texture);	
	sprite.setScale(0.7f, 0.7f); 
	texture.setSmooth(true);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	init();

}
void Player::update() {
	sf::Vector2f position = sprite.getPosition();
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) &&
		position.x > 0)
		sprite.move(-PLAYER_SPEED_X, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) &&
		position.x < WINDOW_WIDTH - g_bounds.width)
		sprite.move(PLAYER_SPEED_X, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&
		position.y >40)
		sprite.move(0.f, -PLAYER_SPEED_Y);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
		position.y < WINDOW_HEIGHT - g_bounds.height)
		sprite.move(0.f, PLAYER_SPEED_Y );
}
void Player::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Player::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Player::getPosition() { return sprite.getPosition(); }
void Player::decreaseHp(size_t dmg) { hp -= dmg; }
void Player::increaseHp(size_t add_hp) { hp += add_hp; }
int Player::getHp() { return hp; }
void Player::increaseDamage(float up) { damage += up; }
int Player::dmg() { return damage; }
void Player::Color(int a) { sprite.setColor(sf::Color(255, 255, 255, a)); }
void Player::decreaseDamage() {damage = damage /2; }
void Player::lowhp() { texture.loadFromFile(IMAGES_FOLDER + PLAYER_LOWHP_FILE_NAME); }
void Player::nachalHp() { hp = 100; }
void Player::init() {
	sprite.setPosition(WINDOW_WIDTH / 2 - sprite.getGlobalBounds().width / 2,
		WINDOW_HEIGHT - sprite.getGlobalBounds().height - PLAYER_OFFSET_Y) ; 
	nachalHp();
	damage = 1;
	amount = 0;
	rasstoyan = 440;
	texture.loadFromFile(IMAGES_FOLDER + PLAYER_FILE_NAME);
}