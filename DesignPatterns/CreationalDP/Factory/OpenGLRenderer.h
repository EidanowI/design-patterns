#pragma once
#include "IRenderer.h"



class OpenGLRenderer : public IRenderer {
public:
	OpenGLRenderer();
	~OpenGLRenderer() override;

	void Render() override;
};