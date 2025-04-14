#include "Configuration.h"
#include <iostream>



Configuration* Configuration::s_pInstance = nullptr;


Configuration::Configuration() {
	std::cout << "Constructor of Configuration" << '\n';
	m_email = "example@gmail.com";
}
Configuration::~Configuration() {
	std::cout << "Destructor of Configuration" << '\n';
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