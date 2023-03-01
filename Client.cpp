#include"AbstractFactory.h"
#include"Car.h"
#include"Client.h"
#include<iostream>


Client::Client(AbstractFactory* new_factory){
	this->factory = new_factory;
}

void Client::create_car(int Color){
	Car* car = factory->create_car(Color);
	std::cout << "The following car has been created : " << std::endl;
	car->printInfo();
}
