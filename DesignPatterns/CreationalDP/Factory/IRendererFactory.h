#pragma once
#include <iostream>

#include "IRenderer.h"



class IRendererFactory {
public:
	virtual ~IRendererFactory() {}

	virtual IRenderer* CreateRenderer() = 0;
};