#include "LamborghiniDoor.cpp"
#include <iostream>

LamborghiniDoor::LamborghiniDoor(String color, int Height, int Width){
	this.color = color;
	this.Height = Height;
	this.Width = Width;
}

void LamborghiniDoor::printInfo(){
	std::cout << color << "Lamborghini door (" << Height <<","<< Width << ")" <<std::endl;
}