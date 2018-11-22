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

	////ctrl
	//else if (GetKeyState(VK_CONTROL))
	//{
	//	Crouch_->Execute();
	//}

	////shift
	//else if (GetKeyState(VK_SHIFT))
	//{
	//	Shield_->Execute();
	//}

	
}

void InputHandler::setCommand(Command* cmd)
{
	Jump_ = cmd;
}