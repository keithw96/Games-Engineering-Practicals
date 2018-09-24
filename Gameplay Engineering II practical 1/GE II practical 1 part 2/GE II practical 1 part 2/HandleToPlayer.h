#pragma once
#include "Character.h"

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()) {}
	Character* operator->() { return character; }
private:
	Character * character;
};