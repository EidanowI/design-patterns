#pragma once
#include "FormatedLine.h"



class BoldLine : public FormatedLine {
public:
    BoldLine(ILine* pOrigin);
    ~BoldLine();

    std::string GetLine() override;
};