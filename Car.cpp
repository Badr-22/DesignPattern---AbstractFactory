#include "Car.h"
#include <iostream>
#include <string>

Car::Car(string color, AbstractDoor door, AbstractWheel wheel){
	this.Color = color;
	this.Door = door;
	this.wheel = wheel;
}

void Car::printInfo(){
	std::cout << Color << " Car with the following components : " <<std::endl;
	door.printInfo();
	wheel.printInfo();
}
