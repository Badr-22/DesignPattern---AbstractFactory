#ifndef CLIENT
#define CLIENT

#include"AbstractFactory.h"

class Client{
public:
	AbstractFactory* factory;

	Client(AbstractFactory* factory);

	void create_car(int Color);

};

#endif
