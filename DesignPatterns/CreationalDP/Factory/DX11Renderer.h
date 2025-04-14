#pragma once
#include "IRenderer.h"



class DX11Renderer : public IRenderer{
public:
	DX11Renderer();
	~DX11Renderer() override;

	void Render() override;
};