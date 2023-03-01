#include "FerrariDoor.cpp"
#include <iostream>

FerrariDoor::FerrariDoor(String color, int Height, int Width){
	this.color = color;
	this.Height = Height;
	this.Width = Width;
}

void FerrariDoor::printInfo(){
	std::cout << color << "Ferrari door (" << Height <<","<< Width << ")" <<std::endl;
}