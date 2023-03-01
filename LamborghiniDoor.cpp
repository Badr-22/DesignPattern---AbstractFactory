#include "LamborghiniDoor.h"
#include <iostream>
#include <string>

LamborghiniDoor::LamborghiniDoor(string color, int Height, int Width){
	this.Color = color;
	this.Height = Height;
	this.Width = Width;
}

void LamborghiniDoor::printInfo(){
	std::cout << Color << "Lamborghini door (" << Height <<","<< Width << ")" <<std::endl;
}