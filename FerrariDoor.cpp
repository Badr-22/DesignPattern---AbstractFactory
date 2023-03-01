#include "FerrariDoor.h"
#include <iostream>

FerrariDoor::FerrariDoor(int color, int Height, int Width){
	this->Color = color;
	this->Height = Height;
	this->Width = Width;
}

void FerrariDoor::printInfo(){
	std::cout << Color << " Ferrari door (" << Height <<","<< Width << ")" <<std::endl;
}