#include "Rocket_lazer.h"



Rocket_lazer::Rocket_lazer(Image &sprite_sheet, int x, int y, int vel, int direction) : P_Weapon(sprite_sheet, x, y, vel, direction)
{
	set_bitmap(sprite_sheet.Player_Weapon_image(ROCKET_LAZER).first, sprite_sheet.Player_image().second);
	set_x(x);
	set_y(y);
	set_vel(vel);
	set_direction(direction);

	cropping = al_create_bitmap(80, 80);
	cropping2 = al_create_bitmap(40, 40);


	type = 1;
}


Rocket_lazer::~Rocket_lazer()
{
}

int Rocket_lazer::damage()
{
	return 2;
}

void Rocket_lazer::abilities(bool collide)
{
	if (collide)
	{
		set_kill(true);
	}
}
