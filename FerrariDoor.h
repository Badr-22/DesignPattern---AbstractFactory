ifndef FERRARI_DOOR
#define FERRARI_DOOR

#include "AbstractDoor.h"
#include <string>

class FerrariDoor : public AbstractDoor {
	public:

		FerrariDoor(string Color, int Hieght, int Width);
		void printInfo();

};

#endif
