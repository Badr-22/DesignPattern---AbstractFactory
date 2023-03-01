#ifndef Toyota_FACTORY
#define Toyota_FACTORY

#include "AbstractFactory.h"

class ToyotaFactory : public AbstractFactory {
	public:

		Car* create_car(int Color);

};

#endif
