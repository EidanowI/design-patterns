#include <iostream>

#include "DecoratorApp.h"
#include "ILine.h"
#include "Line.h"
#include "FormatedLine.h"



DecoratorApp::DecoratorApp() {
	m_line = new Line("Hello");
}
DecoratorApp::~DecoratorApp() {
	delete m_line;
}

void DecoratorApp::Run() {
	std::cout << "\n////// Decorator \\\\\\\\\\\\\n";
	std::cout << m_line->GetLine() << '\n';
	std::cout << "////// Decorator \\\\\\\\\\\\\n";
}


Line::Line(std::string data) : m_data(data){

}
Line::~Line() {

}

std::string Line::GetLine() {	
	return m_data;
}


FormatedLine::FormatedLine(ILine* origin) : m_origin(origin){

}
FormatedLine::~FormatedLine() {
	delete m_origin;
}

std::string FormatedLine::GetLine() {
	return m_origin->GetLine();
}
