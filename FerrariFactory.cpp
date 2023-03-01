#include "FerrariFactory.h"
#include "AbstractDoor.h"
#include "AbstractWheel.h"
#include "FerrariDoor.h"
#include "FerrariWheel.h"
#include "Car.h"
#include <iostream>

Car* FerrariFactory::create_car(int color){
	AbstractDoor* door = new FerrariDoor(color,20,20);
	AbstractWheel* wheel = new FerrariWheel(color,15);
	return new Car(color,door,wheel);
}
