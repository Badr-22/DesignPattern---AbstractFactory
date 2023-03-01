#ifndef LAMBORGHINI_WHEEL
#define LAMBORGHINI_WHEEL

#include "AbstractWheel.h"

class LamborghiniWheel : public AbstractWheel {
	public:

		LamborghiniWheel(int Color, int Diameter);
		void printInfo();

};

#endif
