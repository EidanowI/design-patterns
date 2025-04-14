#include "DX11Renderer.h"
#include "DX12Renderer.h"



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