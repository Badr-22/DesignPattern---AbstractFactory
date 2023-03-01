ifndef CLIENT
#define CLIENT

#include "AbstractFactory.h"
#include <string>

class Client{
	public:

		AbstractFactory factory;

		void create_car(string Color);

};

#endif
