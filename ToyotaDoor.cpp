#include "ToyotaDoor.cpp"
#include <iostream>

ToyotaDoor::ToyotaDoor(String color, int Height, int Width){
	this.color = color;
	this.Height = Height;
	this.Width = Width;
}

void ToyotaDoor::printInfo(){
	std::cout << color << "Toyota door (" << Height <<","<< Width << ")" <<std::endl;
}