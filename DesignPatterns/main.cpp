#include <iostream>
#include "CreationalDP/Singleton/SingletonApp.h"
#include "CreationalDP/Factory/FactoryApp.h"
#include "CreationalDP/Factory/DX11Factory.h"
#include "StructuralDP/Decorator/DecoratorApp.h"



int main() {
	SingletonApp singleton_app = SingletonApp();
	singleton_app.Run();
	
	auto pRenderer_factory = new DX11Factory();
	FactoryApp factory_app = FactoryApp(pRenderer_factory);
	factory_app.Run();

	DecoratorApp decorator_app = DecoratorApp();
	decorator_app.Run();
	
	
	delete pRenderer_factory;
	Configuration::Terminate();
}