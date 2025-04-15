#pragma once
#include <string>



class ILine {
public:
	virtual ~ILine() {};
	
	virtual std::string GetLine() = 0;
};