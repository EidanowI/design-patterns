#include <iostream>
#include "CreationalDP/Singleton/SingletonApp.h"
#include "CreationalDP/Factory/FactoryApp.h"
#include "CreationalDP/Factory/DX11Factory.h"



int main() {
	SingletonApp singleton_app = SingletonApp();
	singleton_app.Run();
	
	auto pRenderer_factory = new DX11Factory();
	FactoryApp factory_app = FactoryApp(pRenderer_factory);
	factory_app.Run();
	
	
	delete pRenderer_factory;
	Configuration::Terminate();
}