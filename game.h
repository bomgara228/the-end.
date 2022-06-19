#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
#include "meteor.h"
#include "laser.h"
#include <vector>
#include <list>
#include "text.h"
#include "splash.h"
#include "bonus.h"
#include "explosion.h"
#include "bad.h"
#include "badlaser.h"
#include "lives.h"
#include "shield.h"
#include "broken.h"


class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER, WIN };
	Game();
	void play();
	void check_events();
	void update();
	void draw();
	void init();
	void check_collisions();
private:
	sf::RenderWindow window;
	GameState game_state = INTRO;
	
	Player player;
	Bad bad;
	Lives liv;
	Shield shield;

	std::vector<Meteor*> meteors;
	std::list<Laser*> lasers;
	std::list<Badlaser*> badlasers;
	TextObject player_hp;
	TextObject score_text;
	SplashScreen game_over_screen;
	SplashScreen background_screen;
	SplashScreen game_intro_screen;
	SplashScreen win;
	std::list<Bonus*> bonuses;

	int stop = 0;
	int agran = 0;
	int bruh = 250;
	int bravo = 0;
	int meh = 0;
	int getit = -30;
	int go = 0;
	

	sf::Clock clock;
	sf::Clock ostanovka;
	sf::Clock jon;
	sf::Clock KAK;
	sf::Clock wow;
	
	
	size_t big_attack = 15000;
	size_t fire_delay = 330;
	size_t immortal = 4000;
	size_t bad_fire = 600;
	size_t zaderzka = 1000;
	std::list<Explosion*> explosions;
	std::list<Broken*> damages;
	size_t score = 0;
	
	void speedboost(size_t);
	void rage(size_t);

};