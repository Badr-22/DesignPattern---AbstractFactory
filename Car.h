#ifndef CAR
#define CAR

#include"AbstractWheel.h"
#include"AbstractDoor.h"

class Car {
	public:

		AbstractDoor* Door;
		AbstractWheel* Wheel;
		int Color;

		Car(int Color, AbstractDoor* Door, AbstractWheel* wheel);
		void printInfo();

};

#endif
