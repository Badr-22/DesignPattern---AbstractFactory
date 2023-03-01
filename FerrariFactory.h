ifndef Ferrari_FACTORY
#define Ferrari_FACTORY

#include "AbstractFactory.h"
#include "Car.h"
#include <string>

class FerrariFactory : public AbstractFactory {
	public:

		Car *create_car(string Color);

};

#endif
