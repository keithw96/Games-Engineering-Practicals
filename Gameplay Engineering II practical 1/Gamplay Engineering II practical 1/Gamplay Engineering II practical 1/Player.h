#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Player : public Character
{
public: 
	void draw() {
		cout << "Draw Player" << endl;
	}
};