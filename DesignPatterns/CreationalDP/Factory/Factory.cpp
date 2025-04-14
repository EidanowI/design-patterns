#include "DX11Renderer.h"
#include "DX12Renderer.h"
#include "OpenGLRenderer.h"



DX11Renderer::DX11Renderer() {
	std::cout << "Constructor of DX11Renderer";
}
DX11Renderer::~DX11Renderer() {
	std::cout << "Destructor of DX11Renderer";
}

void DX11Renderer::Render() {
	std::cout << "Render ass DirectX11";
}


DX12Renderer::DX12Renderer() {
	std::cout << "Constructor of DX12Renderer";
}
DX12Renderer::~DX12Renderer() {
	std::cout << "Destructor of DX12Renderer";
}

void DX12Renderer::Render() {
	std::cout << "Render ass DirectX12";
}


OpenGLRenderer::OpenGLRenderer() {
	std::cout << "Constructor of OpenGLRenderer";
}
OpenGLRenderer::~OpenGLRenderer() {
	std::cout << "Destructor of OpenGLRenderer";
}

void OpenGLRenderer::Render() {
	std::cout << "Render ass OpenGL";
}