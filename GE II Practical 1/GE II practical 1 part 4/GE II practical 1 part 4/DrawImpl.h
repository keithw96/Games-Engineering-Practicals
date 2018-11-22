#pragma once
#include "DrawAPI.h"
#include <iostream>
using namespace std;

class DrawImpl : public DrawAPI
{
public:
	void Draw() {
		cout << "Draw Impl" << endl;
	}
};