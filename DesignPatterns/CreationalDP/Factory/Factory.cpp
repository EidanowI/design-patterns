#include "DX11Renderer.h"
#include "DX12Renderer.h"
#include "OpenGLRenderer.h"

#include "DX11Factory.h"
#include "DX12Factory.h"
#include "OpenGLFactory.h"



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


DX11Factory::DX11Factory() {
	std::cout << "Constructor of DX11Factory";
}
DX11Factory::~DX11Factory() {
	std::cout << "Destructor of DX11Factory";
}

IRenderer* DX11Factory::CreateRenderer() {
	return new DX11Renderer();
}


DX12Factory::DX12Factory() {
	std::cout << "Constructor of DX12Factory";
}
DX12Factory::~DX12Factory() {
	std::cout << "Destructor of DX12Factory";
}

IRenderer* DX12Factory::CreateRenderer() {
	return new DX12Renderer();
}


OpenGLFactory::OpenGLFactory() {
	std::cout << "Constructor of OpenGLFactory";
}
OpenGLFactory::~OpenGLFactory() {
	std::cout << "Destructor of OpenGLFactory";
}

IRenderer* OpenGLFactory::CreateRenderer() {
	return new OpenGLRenderer();
}