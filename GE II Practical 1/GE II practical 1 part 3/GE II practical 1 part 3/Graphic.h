#pragma once
#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphic.h"
class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void Draw();
};
#endif // !GRAPHIC_H
