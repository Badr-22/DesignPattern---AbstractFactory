ifndef ABSTRACT_DOOR
#define ABSTRACT_DOOR

#include <string>

class AbstractDoor {
	public:
		string Color;
		int Height;
		int Width;

		virtual void printInfo() =0;

};

#endif
