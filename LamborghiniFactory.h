ifndef LAMBORGHINI_FACTORY
#define LAMBORGHINI_FACTORY

#include "AbstractFactory.h"
#include "Car.h"
#include <string>

class LamborghiniFactory : public AbstractFactory {
	public:

		Car *create_car(string Color);

};

#endif
