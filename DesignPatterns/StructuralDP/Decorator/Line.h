#pragma once
#include "ILine.h"



class Line : public ILine{
public:
	Line(std::string data);
	~Line();

	std::string GetLine() override;

private:
	std::string m_data;
};
