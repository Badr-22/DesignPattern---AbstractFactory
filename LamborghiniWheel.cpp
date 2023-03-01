#include "LamborghiniWheel.h"
#include <iostream>


LamborghiniWheel::LamborghiniWheel(int color, int Diameter){
	this->Color = color;
	this->Diameter = Diameter;
}

void LamborghiniWheel::printInfo(){
	std::cout << Color << " Lamborghini wheel (" << Diameter << ")" <<std::endl;
}