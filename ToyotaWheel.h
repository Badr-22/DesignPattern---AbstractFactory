ifndef Toyota_WHEEL
#define Toyota_WHEEL

#include "AbstractWheel.h"
#include <string>

class ToyotaWheel : public AbstractWheel {
	public:

		ToyotaWheel(string Color, int Diameter);
		void printInfo();

};

#endif
