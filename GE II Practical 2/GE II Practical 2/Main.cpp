#include "InputHandler.h"
#include "JumpCommand.h"

int main()
{
	bool game = true;

	InputHandler input;

	JumpCommand jump = JumpCommand();
	input.setCommand(&jump);

	while (game)
	{
		input.handleInput();
	}

	return 0;
}