#include "settings.h"
#include "lives.h"

Lives::Lives() {
	texture1.loadFromFile(IMAGES_FOLDER + LIVES_ICON);
	sprite1.setTexture(texture1);
	sprite1.setScale(0.06f, 0.06f);

	texture2.loadFromFile(IMAGES_FOLDER + LIVES_ICON);
	sprite2.setTexture(texture2);
	sprite2.setScale(0.06f, 0.06f);

	texture3.loadFromFile(IMAGES_FOLDER + LIVES_ICON);
	sprite3.setTexture(texture3);
	sprite3.setScale(0.06f, 0.06f);
	init();
};

void Lives::update() {
	sf::FloatRect g_bounds = sprite1.getGlobalBounds();
	if (amount == 0) {
		sprite1.setPosition(rass+200 - g_bounds.width / 2,
			WINDOW_HEIGHT - g_bounds.height);
		sprite2.setPosition(rass + 200 - g_bounds.width / 2,
			WINDOW_HEIGHT - g_bounds.height);
		sprite3.setPosition(rass + 200 - g_bounds.width / 2,
			WINDOW_HEIGHT - g_bounds.height);
	}
	else
		if (amount == 1) {
			sprite1.setPosition(rass - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite2.setPosition(rass + 200 - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite3.setPosition(rass + 200 - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			}
		else
		if (amount == 2) {
			sprite1.setPosition(rass - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite2.setPosition(rass +10 - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite3.setPosition(rass + 200 - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);

		}
		else if (amount == 3) {
			sprite1.setPosition(rass - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite2.setPosition(rass+10- g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
			sprite3.setPosition(rass+ 20 - g_bounds.width / 2,
				WINDOW_HEIGHT - g_bounds.height);
		}
}
void Lives::decreaceAmount(int am) { amount -=am; }
int Lives::howMuch() { return amount; }
void Lives::draw(sf::RenderWindow& window) { window.draw(sprite1); window.draw(sprite2); window.draw(sprite3); }
void Lives::init() { amount = 3; }