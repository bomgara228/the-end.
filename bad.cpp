#include "bad.h"
#include "settings.h"



Bad::Bad() {
	texture.loadFromFile(IMAGES_FOLDER + BAD_SHIP );
	sprite.setScale(1.4f, 1.3f);
	sprite.setTexture(texture);
	texture.setSmooth(true);
	bad_bar.loadFromFile(IMAGES_FOLDER + HP_BAR);
	hp_bar.setTexture(bad_bar);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	sf::FloatRect h_bounds = hp_bar.getGlobalBounds();
	init();
	onit();

	
}

void Bad::update() {
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	if (a <=0) {
		sprite.setPosition(WINDOW_WIDTH / 2 - g_bounds.width / 2,
			WINDOW_HEIGHT / 6);
		a++;
	}
	
	da = BAD_HP / 800000.f;
	hp_bar.setScale(da, 1.f);
	if (BAD_HP <= 0) { sprite.move(100, -300); }
	
	
}
	
void Bad::draw(sf::RenderWindow& window) { window.draw(sprite); window.draw(hp_bar);
}
sf::FloatRect Bad::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Bad::getPosition() { return sprite.getPosition(); }
void Bad::takedamage(float damage) {BAD_HP -= damage ; }
float Bad::badHp() { return BAD_HP; }
void Bad::setDel(bool a) { del = a; }
bool Bad::getDel() { return del; }
void Bad::setPos(int x, int y) { sprite.setPosition(x, y); }
void Bad::yxodit(float x, float y) { sprite.move(x, y); }
void Bad::prixodit(float x, float y) { hp_bar.move(x, y); }
void Bad::init() { sprite.move(100, -300); a = 0;  BAD_HP = 800000; }
void Bad::onit() { hp_bar.setPosition(sprite.getGlobalBounds().width / 1.75, 80); }

