#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie *robert;
	Zombie *jean;
	Zombie *andy;

	robert = event.newZombie("robert");
	robert->advert();
	jean = event.newZombie("jean");
	jean->advert();
	event.setZombieType("nullos");
	andy = event.newZombie("andy");
	andy->advert();
	return 0;
}
