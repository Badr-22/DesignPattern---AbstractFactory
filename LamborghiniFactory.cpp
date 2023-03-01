#include "LamborghiniFactory.h"
#include "AbstractDoor.h"
#include "AbstractWheel.h"
#include "LamborghiniDoor.h"
#include "LamborghiniWheel.h"
#include "Car.h"
#include <iostream>

Car* LamborghiniFactory::create_car(int color){
	AbstractDoor* door = new LamborghiniDoor(color,15,15);
	AbstractWheel* wheel = new LamborghiniWheel(color,12);
	return new Car(color,door,wheel);
}
