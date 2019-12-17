#include "global.h"
#include "Asset_management/Image.h"
#include "Asset_management/Sound.h"

#pragma once
class E_Weapon
{
public:
	//puts in initial value
	E_Weapon(Image &sprite_sheet, int x, int y, int vel, int direction);
	~E_Weapon();

	//gets x position, y position, speed, and direction of the player
	virtual int get_x();
	virtual int get_y();
	virtual int get_vel();
	virtual int get_direction();

	//returns bitmap value
	virtual std::pair <ALLEGRO_BITMAP*, int> get_bitmap();

	//sets the x position, y position, speed, and direction of the player 
	virtual void set_x(int x);
	virtual void set_y(int y);
	virtual void set_vel(int vel);
	virtual void set_direction(int direction);

	virtual int damage();

	//sets the bitmap information
	virtual void set_bitmap(ALLEGRO_BITMAP* image, int entity_num);

	//update weapon info
	virtual void update();

	//displays the weapon
	virtual void render();

private:
	//integer variables
	int x, y, vel, direction, buttons[7], type;

	//boolean variable
	bool draw;

	//bitmap instance variables
	ALLEGRO_BITMAP *cropping;
	ALLEGRO_BITMAP *cropping2;

	//pair variable
	std::pair <ALLEGRO_BITMAP*, int> image;

};

