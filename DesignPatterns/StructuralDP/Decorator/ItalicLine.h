#pragma once
#include "FormatedLine.h"



class ItalicLine : public FormatedLine {
public:
    ItalicLine(ILine* pOrigin);
    ~ItalicLine();

    std::string GetLine() override;
};