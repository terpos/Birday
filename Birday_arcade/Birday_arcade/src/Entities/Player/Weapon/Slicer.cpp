#include "Slicer.h"



Slicer::Slicer(Image &sprite_sheet, int x, int y, int vel, int direction): P_Weapon(sprite_sheet, x, y, vel, direction)
{
	set_bitmap(sprite_sheet.Player_Weapon_image(SLICER).first, sprite_sheet.Player_image().second);
	set_x(x);
	set_y(y);
	set_vel(vel);
	set_direction(direction);

	cropping = al_create_bitmap(80, 80);
	cropping2 = al_create_bitmap(40, 40);
	set_kill(false);

	type = 1;
}


Slicer::~Slicer()
{
}

int Slicer::damage()
{
	return 20;
}

void Slicer::abilities(bool collide)
{
	set_kill(false);
}


