ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY

#include <string>

class AbstractFactory {
	public:
		virtual Car *create_car(string Color) =0; 
};

#endif
