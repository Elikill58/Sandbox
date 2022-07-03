#ifndef SAND_H
#define SAND_H
#include "material.h"



// Classe d�finissant le sable

class Sand : public Material
{

public:

	Sand();
	
	Material*	init();
	Nature		get_nature();
	bool		can_burn();
	sf::Color	get_color();

	void		update(int x, int y);
	void		update_fire(int x, int y);
};

#endif