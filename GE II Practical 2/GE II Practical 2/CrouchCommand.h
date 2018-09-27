#pragma once
#include "Command.h"
#include <iostream>
using namespace std;

class CrouchCommand : public Command
{
public:
	virtual void execute() { crouch(); }
private:
	void crouch() {
		cout << "crouch" << endl;
	};
};