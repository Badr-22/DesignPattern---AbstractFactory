#include "Car.h"
#include <iostream>

Car::Car(int color, AbstractDoor* door, AbstractWheel* wheel){
	this->Color = color;
	this->Door = door;
	this->Wheel = wheel;
}

void Car::printInfo(){
	std::cout << Color << " Car with the following components : " <<std::endl;
	Door->printInfo();
	Wheel->printInfo();
}
