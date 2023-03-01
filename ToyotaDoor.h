#ifndef TOYOTA_DOOR
#define TOYOTA_DOOR

#include "AbstractDoor.h"
#include "Car.h"

class ToyotaDoor : public AbstractDoor {
	public:

		ToyotaDoor(int Color, int Hieght, int Width);
		void printInfo();

};

#endif
