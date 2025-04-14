#include <iostream>

#include "Configuration.h"
#include "SingletonApp.h"



Configuration* Configuration::s_pInstance = nullptr;


Configuration::Configuration() {
	std::cout << "Constructor of Configuration" << '\n';
	m_email = "example@gmail.com";
}
Configuration::~Configuration() {
	std::cout << "Destructor of Configuration" << '\n';
}

const char* Configuration::GetEmail() {
	return m_email.c_str();
}

Configuration* Configuration::GetInstance() {
	if (!s_pInstance) {
		s_pInstance = new Configuration();
	}
	return s_pInstance;
}
void Configuration::Terminate() {
	if (s_pInstance) {
		delete s_pInstance;
	}
}


SingletonApp::SingletonApp() {
	m_pConfiguration = Configuration::GetInstance();
}
SingletonApp::~SingletonApp() {

}

void SingletonApp::Run() {
	std::cout << "\n////// Singleton \\\\\\\\\\\\\n";
	std::cout << "Singleton app configured by " << m_pConfiguration->GetEmail() << '\n';
	std::cout << "////// Singleton \\\\\\\\\\\\\n";
}