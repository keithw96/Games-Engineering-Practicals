#include <iostream>
#include "Graphic.h"
#include "GraphicProxy.h"

using namespace std;

GraphicProxy::GraphicProxy()
{
	this->graphic = 0;
}

GraphicProxy::~GraphicProxy()
{
	if (graphic)
	{
		delete graphic;
	}
}

Graphic* GraphicProxy::getInstance()
{
	if (!graphic)
	{
		graphic = new Graphic();
		return graphic;
	}
}

void GraphicProxy::Draw()
{
	getInstance()->Draw();
}