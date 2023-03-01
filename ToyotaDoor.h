ifndef TOYOTA_DOOR
#define TOYOTA_DOOR

#include "AbstractDoor.h"
#include "Car.h"
#include <string>

class ToyotaDoor : public AbstractDoor {
	public:

		ToyotaDoor(string Color, int Hieght, int Width);
		void printInfo();

};

#endif
