#ifndef FERRARI_DOOR
#define FERRARI_DOOR

#include "AbstractDoor.h"

class FerrariDoor : public AbstractDoor {
	public:

		FerrariDoor(int Color, int Hieght, int Width);
		void printInfo();

};

#endif
