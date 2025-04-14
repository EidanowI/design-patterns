#pragma once
#include "IRenderer.h"



class DX12Renderer : public IRenderer {
public:
	DX12Renderer();
	~DX12Renderer() override;

	void Render() override;
};