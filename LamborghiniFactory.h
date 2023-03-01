#ifndef LAMBORGHINI_FACTORY
#define LAMBORGHINI_FACTORY

#include "AbstractFactory.h"
#include "Car.h"

class LamborghiniFactory : public AbstractFactory {
	public:

		Car* create_car(int Color);

};

#endif
