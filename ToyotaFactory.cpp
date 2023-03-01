#include "ToyotaFactory.h"
#include "AbstractDoor.h"
#include "AbstractWheel.h"
#include "ToyotaDoor.h"
#include "ToyotaWheel.h"
#include "Car.h"
#include <iostream>
#include <string>

ToyotaFactory::create_car(string color){
	AbstractDoor door = new ToyotaDoor(color,20,20);
	AbsractWheel wheel = new ToyotaWheel(color,15)
	return new Car(color,door,wheel);
}
