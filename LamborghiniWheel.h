ifndef LAMBORGHINI_WHEEL
#define LAMBORGHINI_WHEEL

#include "AbstractWheel.h"
#include <string>

class LamborghiniWheel : public AbstractWheel {
	public:

		LamborghiniWheel(string Color, int Diameter);
		void printInfo();

};

#endif
