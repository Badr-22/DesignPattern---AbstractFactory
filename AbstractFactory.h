#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY

#include "Car.h"

class AbstractFactory {
	public:
		virtual Car* create_car(int Color) =0; 
};

#endif
