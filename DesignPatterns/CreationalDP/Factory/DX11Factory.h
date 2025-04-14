#pragma once
#include "IRendererFactory.h"



class DX11Factory : public IRendererFactory {
public:
	DX11Factory();
	~DX11Factory() override;

	IRenderer* CreateRenderer() override;
};