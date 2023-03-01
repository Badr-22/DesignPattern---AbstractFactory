#include "FerrariDoor.h"
#include <iostream>
#include <string>

FerrariDoor::FerrariDoor(string color, int Height, int Width){
	this.Color = color;
	this.Height = Height;
	this.Width = Width;
}

void FerrariDoor::printInfo(){
	std::cout << Color << "Ferrari door (" << Height <<","<< Width << ")" <<std::endl;
}