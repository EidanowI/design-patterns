#pragma once
#include "ILine.h"



class DecoratorApp {
public:
	DecoratorApp();
	~DecoratorApp();
	
	void Run();

private:
	ILine* m_pLine;
};