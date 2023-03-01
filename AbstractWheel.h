ifndef ABSTRACT_WHEEL
#define ABSTRACT_WHEEL

#include <string>

class AbstractWheel {
	public:
		string Color;
		int Diameter;

		virtual void printInfo() =0;

};

#endif
