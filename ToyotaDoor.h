ifndef TOYOTA_DOOR
#define TOYOTA_DOOR

#include "AbstractDoor.h"

class ToyotaDoor : public AbstractDoor {
	public:

		ToyotaDoor(string Color, int Hieght, int Width);
		void printInfo();

};

#endif
