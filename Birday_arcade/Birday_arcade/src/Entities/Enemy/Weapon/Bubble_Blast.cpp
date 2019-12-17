#include "Bubble_Blast.h"



Bubble_Blast::Bubble_Blast(Image &sprite_sheet, int x, int y, int vel, int direction): E_Weapon(sprite_sheet, x, y, vel, direction)
{
	set_bitmap(sprite_sheet.Enemy_Weapon_image(BUBBLE_SHOT).first, sprite_sheet.Player_image().second);
	set_x(x);
	set_y(y);
	set_vel(vel);
	set_direction(direction);

	cropping = al_create_bitmap(80, 80);
}


Bubble_Blast::~Bubble_Blast()
{
}

int Bubble_Blast::damage()
{
	return 15;
}
