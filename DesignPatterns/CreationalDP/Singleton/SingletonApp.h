#pragma once
#include "Configuration.h"



class SingletonApp {
public:
	SingletonApp();
	~SingletonApp();

	void Run();

private:
	Configuration* m_pConfiguration;
};