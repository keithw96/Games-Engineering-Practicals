#pragma once
#include "Command.h"
class InputHandler
{
public:
	void handleInput();
	void setCommand(Command* cmd);
	Command * Jump_;
	Command * Fire_;
	Command * Crouch_;
	Command * Shield_;
	Command * Melee_;
};