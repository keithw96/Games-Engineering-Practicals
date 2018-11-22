#pragma once
#include "Command.h"
#include <iostream>
using namespace std;

class JumpCommand : public Command
{
public:

	JumpCommand() {};

	virtual void execute() { jump(); };

	void jump() {
		cout << "jump" << endl;
	};
};