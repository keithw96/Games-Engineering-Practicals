#include "Entity.h"

#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"

#include "HealthSystem.h"
#include "PositionSystem.h"
#include "ControlSystem.h"
#include "AiSystem.h"
#include "RenderSystem.h"

int main(void*)
{
	Entity player;
	Entity alien;
	Entity dog;
	Entity cat;

	HealthComponent hc; PositionComponent pc; ControlComponent cc;

	player.addComponent(hc); player.addComponent(pc); player.addComponent(cc);

	alien.addComponent(hc); alien.addComponent(pc);

	dog.addComponent(hc); dog.addComponent(pc);

	cat.addComponent(hc); cat.addComponent(pc);

	HealthSystem hs; PositionSystem ps; AiSystem as; ControlSystem cs; RenderSystem rs;
	
	hs.addEntity(player); 
	
	ps.addEntity(player); 

	while (true)
	{
		hs.update(); ps.update();
	}

	return 0;
}