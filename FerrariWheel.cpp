#include "FerrariWheel.h"
#include <iostream>
#include <string>

FerrariWheel::FerrariWheel(string color, int Diameter){
	this.Color = color;
	this.Diameter = Diameter;
}

void FerrariWheel::printInfo(){
	std::cout << Color << "Ferrari wheel (" << Diameter << ")" <<std::endl;
}