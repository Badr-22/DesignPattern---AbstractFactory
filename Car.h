ifndef CAR
#define CAR

#include"AbstractWheel.h"
#include"AbstractDoor.h"
#include <string>

class Car {
	public:

		AbstractDoor Door;
		AbsractWheel Wheel;
		string Color;

		Car(string Color, AbstractDoor Door, AbstractWheel wheel);
		void printInfo();

};

#endif
