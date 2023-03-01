#include <iostream>

#include <AbstractFactory.h>
#include <FerrariFactory.h>
#include <ToyotaFactory.h>
#include <LamborghiniFactory.h>
#include <AbstractFactory.h>
#include <Client.h>
#include <string>

int main (int argc , char ** argv ) {
	string carBrand = argv[1];

	AbstractFactory factory;
	if (carBrand == 'Ferrari'){
		factory = new FerrariFactory();
	}else if (carBrand == 'Lamborghini'){
		factory = new LamborghiniFactory(); 
	}else{
		factory = new ToyotaFactory();
	}

	Client client = new Client(factory);
	client.create_car("Red");
	client.create_car("Green")
}