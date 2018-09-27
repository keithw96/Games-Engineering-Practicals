#pragma once
#include "Command.h"
#include <iostream>
using namespace std;

class ShieldCommand : public Command
{
public:
	virtual void execute() { shield(); }
private:
	void shield() {
		cout << "shield" << endl;
	};
};