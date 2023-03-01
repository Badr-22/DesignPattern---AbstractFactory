#include "ToyotaWheel.h"
#include <iostream>
#include <string>

ToyotaWheel::ToyotaWheel(string color, int Diameter){
	this.Color = color;
	this.Diameter = Diameter;
}

void ToyotaWheel::printInfo(){
	std::cout << Color << "Toyota wheel (" << Diameter << ")" <<std::endl;
}