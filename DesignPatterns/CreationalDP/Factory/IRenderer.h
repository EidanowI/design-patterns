#pragma once



class IRenderer {
public:
	virtual ~IRenderer() {}

	virtual void Render() = 0;
};