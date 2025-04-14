#pragma once
#include "IRendererFactory.h"



class DX12Factory : public IRendererFactory {
public:
	DX12Factory();
	~DX12Factory() override;

	IRenderer* CreateRenderer() override;
};