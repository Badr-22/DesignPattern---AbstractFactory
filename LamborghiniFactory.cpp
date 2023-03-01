#include "LamborghiniFactory.h"
#include "AbstractDoor.h"
#include "AbstractWheel.h"
#include "LamborghiniDoor.h"
#include "LamborghiniWheel.h"
#include "Car.h"
#include <iostream>
#include <string>

LamborghiniFactory::create_car(string color){
	AbstractDoor door = new LamborghiniDoor(color,20,20);
	AbsractWheel wheel = new LamborghiniWheel(color,15)
	return new Car(color,door,wheel);
}
