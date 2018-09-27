#pragma once
#include "Command.h"
#include <iostream>
using namespace std;

class FireCommand : public Command
{
public :
	virtual void execute() { fireGun(); }

private:
	void fireGun() {
		cout << "Draw Impl" << endl;
	}
};
