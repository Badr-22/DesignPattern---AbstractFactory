#ifndef ABSTRACT_DOOR
#define ABSTRACT_DOOR

class AbstractDoor {
	public:
		int Color;
		int Height;
		int Width;

		virtual void printInfo() =0;

};

#endif
