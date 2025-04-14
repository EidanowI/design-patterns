#pragma once
#include <iostream>



class IRenderer {
public:
	virtual ~IRenderer() {}

	virtual void Render() = 0;
};