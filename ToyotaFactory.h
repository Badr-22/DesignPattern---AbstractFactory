ifndef Toyota_FACTORY
#define Toyota_FACTORY

#include "AbstractFactory.h"
#include <string>

class ToyotaFactory : public AbstractFactory {
	public:

		Car *create_car(string Color);

};

#endif
