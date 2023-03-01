#include "ToyotaDoor.h"
#include <iostream>

ToyotaDoor::ToyotaDoor(int color, int Height, int Width){
	this->Color = color;
	this->Height = Height;
	this->Width = Width;
}

void ToyotaDoor::printInfo(){
	std::cout << Color << " Toyota door (" << Height <<","<< Width << ")" <<std::endl;
}