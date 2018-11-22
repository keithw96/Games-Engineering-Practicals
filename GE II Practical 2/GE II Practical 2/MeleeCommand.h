#pragma once
#include "Command.h"
#include <iostream>
using namespace std;

class MeleeCommand : public Command
{
public:
	virtual void execute() { melee(); }

	void melee() {
		cout << "melee" << endl;
	};
};