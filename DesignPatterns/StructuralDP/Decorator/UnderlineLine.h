#pragma once
#include "FormatedLine.h"



class UnderlineLine : public FormatedLine {
public:
    UnderlineLine(ILine* pOrigin);
    ~UnderlineLine();

    std::string GetLine() override;
};