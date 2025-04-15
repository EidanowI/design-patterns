#include <iostream>

#include "DecoratorApp.h"
#include "ILine.h"
#include "Line.h"
#include "FormatedLine.h"
#include "BoldLine.h"
#include "ItalicLine.h"



DecoratorApp::DecoratorApp() {
	m_pLine = new ItalicLine(new BoldLine(new Line("Hello")));
}
DecoratorApp::~DecoratorApp() {
	delete m_pLine;
}

void DecoratorApp::Run() {
	std::cout << "\n////// Decorator \\\\\\\\\\\\\n";
	std::cout << m_pLine->GetLine() << '\n';
	std::cout << "////// Decorator \\\\\\\\\\\\\n";
}


Line::Line(std::string data) : m_data(data){

}
Line::~Line() {

}

std::string Line::GetLine() {	
	return m_data;
}


FormatedLine::FormatedLine(ILine* origin) : m_pOrigin(origin){

}
FormatedLine::~FormatedLine() {
	delete m_pOrigin;
}

std::string FormatedLine::GetLine() {
	return m_pOrigin->GetLine();
}


BoldLine::BoldLine(ILine* pOrigin) : FormatedLine(pOrigin) {

}
BoldLine::~BoldLine() {

}

std::string BoldLine::GetLine() {
	return "**" + FormatedLine::GetLine() + "**";
}


ItalicLine::ItalicLine(ILine* pOrigin) : FormatedLine(pOrigin) {

}
ItalicLine::~ItalicLine() {

}

std::string ItalicLine::GetLine() {
	return "*" + FormatedLine::GetLine() + "*";
}