#pragma once
#include "Character.h"
#include <iostream>

class Boss : public Character
{
public: 
	void draw() {
		cout << "Draw Boss" << endl;
	}
};