#pragma once
#include "IRenderer.h"
#include "IRendererFactory.h"



class FactoryApp {
public:
	FactoryApp(IRendererFactory* factory);
	~FactoryApp();

	void Run();

private:
	IRenderer* m_pRenderer;
};