#pragma once
#include "IRendererFactory.h"



class OpenGLFactory : public IRendererFactory {
public:
	OpenGLFactory();
	~OpenGLFactory() override;

	IRenderer* CreateRenderer() override;
};