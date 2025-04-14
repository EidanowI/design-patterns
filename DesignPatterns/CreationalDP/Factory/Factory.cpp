#include "FactoryApp.h"

#include "DX11Renderer.h"
#include "DX12Renderer.h"
#include "OpenGLRenderer.h"

#include "DX11Factory.h"
#include "DX12Factory.h"
#include "OpenGLFactory.h"



FactoryApp::FactoryApp(IRendererFactory* factory) {
	m_pRenderer = factory->CreateRenderer();
}
FactoryApp::~FactoryApp(){
	delete m_pRenderer;
}

void FactoryApp::Run() {
	std::cout << "\n////// Factory \\\\\\\\\\\\\n";
	m_pRenderer->Render();
	std::cout << "////// Factory \\\\\\\\\\\\\n";
}


DX11Renderer::DX11Renderer() {
	std::cout << "Constructor of DX11Renderer" << '\n';
}
DX11Renderer::~DX11Renderer() {
	std::cout << "Destructor of DX11Renderer" << '\n';
}

void DX11Renderer::Render() {
	std::cout << "Render ass DirectX11" << '\n';
}


DX12Renderer::DX12Renderer() {
	std::cout << "Constructor of DX12Renderer" << '\n';
}
DX12Renderer::~DX12Renderer() {
	std::cout << "Destructor of DX12Renderer" << '\n';
}

void DX12Renderer::Render() {
	std::cout << "Render ass DirectX12" << '\n';
}


OpenGLRenderer::OpenGLRenderer() {
	std::cout << "Constructor of OpenGLRenderer" << '\n';
}
OpenGLRenderer::~OpenGLRenderer() {
	std::cout << "Destructor of OpenGLRenderer" << '\n';
}

void OpenGLRenderer::Render() {
	std::cout << "Render ass OpenGL" << '\n';
}


DX11Factory::DX11Factory() {
	std::cout << "Constructor of DX11Factory" << '\n';
}
DX11Factory::~DX11Factory() {
	std::cout << "Destructor of DX11Factory" << '\n';
}

IRenderer* DX11Factory::CreateRenderer() {
	return new DX11Renderer();
}


DX12Factory::DX12Factory() {
	std::cout << "Constructor of DX12Factory" << '\n';
}
DX12Factory::~DX12Factory() {
	std::cout << "Destructor of DX12Factory" << '\n';
}

IRenderer* DX12Factory::CreateRenderer() {
	return new DX12Renderer();
}


OpenGLFactory::OpenGLFactory() {
	std::cout << "Constructor of OpenGLFactory" << '\n';
}
OpenGLFactory::~OpenGLFactory() {
	std::cout << "Destructor of OpenGLFactory" << '\n';
}

IRenderer* OpenGLFactory::CreateRenderer() {
	return new OpenGLRenderer();
}