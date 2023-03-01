#ifndef Toyota_WHEEL
#define Toyota_WHEEL

#include "AbstractWheel.h"

class ToyotaWheel : public AbstractWheel {
	public:

		ToyotaWheel(int Color, int Diameter);
		void printInfo();

};

#endif
