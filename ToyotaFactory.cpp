#include "ToyotaFactory.h"
#include "AbstractDoor.h"
#include "AbstractWheel.h"
#include "ToyotaDoor.h"
#include "ToyotaWheel.h"
#include "Car.h"
#include <iostream>

Car* ToyotaFactory::create_car(int color){
	AbstractDoor* door = new ToyotaDoor(color,10,10);
	AbstractWheel* wheel = new ToyotaWheel(color,8);
	return new Car(color,door,wheel);
}
