#ifndef Ferrari_FACTORY
#define Ferrari_FACTORY

#include "AbstractFactory.h"
#include "Car.h"

class FerrariFactory : public AbstractFactory {
	public:

		Car* create_car(int Color);

};

#endif
