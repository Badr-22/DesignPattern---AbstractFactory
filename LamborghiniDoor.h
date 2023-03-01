#ifndef LAMBORGHINI_DOOR
#define LAMBORGHINI_DOOR

#include "AbstractDoor.h"

class LamborghiniDoor : public AbstractDoor {
	public:

		LamborghiniDoor(int Color, int Hieght, int Width);
		void printInfo();

};

#endif
