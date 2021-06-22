#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie *robert;
	Zombie *jean;
	Zombie *andy;
	Zombie *random;

	robert = event.newZombie("robert");
	robert->advert();
	delete robert;
	jean = event.newZombie("jean");
	jean->advert();
	delete jean;
	event.setZombieType("nullos");
	andy = event.newZombie("andy");
	andy->advert();
	delete andy;
	random = event.randomChump();
	random->advert();
	delete random;
	random = event.randomChump();
	random->advert();
	delete random;
	random = event.randomChump();
	random->advert();
	delete random;
	return 0;
}
