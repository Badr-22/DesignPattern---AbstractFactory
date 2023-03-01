ifndef LAMBORGHINI_DOOR
#define LAMBORGHINI_DOOR

#include "AbstractDoor.h"
#include <string>

class LamborghiniDoor : public AbstractDoor {
	public:

		LamborghiniDoor(string Color, int Hieght, int Width);
		void printInfo();

};

#endif
