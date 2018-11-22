
#include "DrawImpl.h"
#include "Player.h"
#include "Character.h"

int main(void)
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();

}