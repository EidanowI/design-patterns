#pragma once
#include "ILine.h"



class FormatedLine : public ILine{
public:
	FormatedLine(ILine* origin);
	~FormatedLine();

	std::string GetLine() override;

private:
	ILine* m_origin;
};