#include "AbstractFactory.h"
#include "Car.h"
#include "Client.h"
#include <string>
#include <iostream>


void Client::create_car(string Color){
	Car car = factory.create_car(Color);
	std::cout << "The following car has been created : " << std::endl;
	car.printInfo();
}
