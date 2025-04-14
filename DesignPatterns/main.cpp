#include <iostream>
#include "CreationalDP/Singleton/SingletonApp.h"



int main() {
	SingletonApp singleton_app = SingletonApp();
	singleton_app.Run();
	

	Configuration::Terminate();
}