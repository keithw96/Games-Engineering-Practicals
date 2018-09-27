#include "InputHandler.h"
#include <Windows.h>
void InputHandler::handleInput()
{
	//space
	if (GetKeyState(0x20))
	{
		Jump_->Execute();
	}
	//f
	else if (GetKeyState(0x46)) 
	{
		Fire_->Execute();
	}

	//e
	else if (GetKeyState(0x45))
	{
		Melee_->Execute();
	}

	//ctrl
	else if (GetKeyState(0x11))
	{
		Crouch_->Execute();
	}

	//shift
	else if (GetKeyState(0x10))
	{
		Shield_->Execute();
	}
}