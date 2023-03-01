#include "ToyotaWheel.h"
#include <iostream>

ToyotaWheel::ToyotaWheel(int color, int Diameter){
	this->Color = color;
	this->Diameter = Diameter;
}

void ToyotaWheel::printInfo(){
	std::cout << Color << " Toyota wheel (" << Diameter << ")" <<std::endl;
}