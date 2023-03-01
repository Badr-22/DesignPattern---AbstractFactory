#ifndef Ferrari_WHEEL
#define Ferrari_WHEEL

#include "AbstractWheel.h"

class FerrariWheel : public AbstractWheel {
	public:

		FerrariWheel(int Color, int Diameter);
		void printInfo();

};

#endif
