#include "Health_Chip.h"



Health_Chip::Health_Chip(Image image, int x, int y): Power_Up(image, x, y)
{
	set_bitmap(image.Power_Up_image(HEALTH_CHIP).first, image.Power_Up_image(0).second);
	set_x(x);
	set_y(y);
}


Health_Chip::~Health_Chip()
{
}

void Health_Chip::power_up_abilities(Player & player, std::vector<Enemy*>& enemy)
{
	player.set_health(player.get_health() + 1);
	std::cout << "Health +1" << std::endl;
}
