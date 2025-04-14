#pragma once
#include <string>



class Configuration {
public:
	Configuration(const Configuration& other) = delete;
	Configuration(Configuration&& other) = delete;
	Configuration& operator=(const Configuration& other) = delete;
	Configuration& operator=(Configuration&& other) = delete;

	const char* GetEmail();

	static Configuration* GetInstance();
	static void Terminate();

private:
	Configuration();
	~Configuration();

private:
	static Configuration* s_pInstance;

	std::string m_email;
};