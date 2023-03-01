ifndef Ferrari_WHEEL
#define Ferrari_WHEEL

#include "AbstractWheel.h"
#include <string>

class FerrariWheel : public AbstractWheel {
	public:

		FerrariWheel(string Color, int Diameter);
		void printInfo();

};

#endif
