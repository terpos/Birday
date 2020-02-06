#include "Power_Up.h"

#pragma once
class Health_Chip: public Power_Up
{
public:
	Health_Chip(Image image, int x, int y);
	~Health_Chip();

	void power_up_abilities(Sound sound, Player* &player, std::vector <Enemy*> &enemy, std::vector <B_2_Bomber*> &b2, std::vector <needle_wind*> &nw, Options option);

private:
	int x, y;

};

