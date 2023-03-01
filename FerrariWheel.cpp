#include "FerrariWheel.h"
#include <iostream>

FerrariWheel::FerrariWheel(int color, int Diameter){
	this->Color = color;
	this->Diameter = Diameter;
}

void FerrariWheel::printInfo(){
	std::cout << Color << " Ferrari wheel (" << Diameter << ")" <<std::endl;
}