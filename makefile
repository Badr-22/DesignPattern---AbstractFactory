all: Client.o FerrariFactory.o LamborghiniFactory.o ToyotaFactory.o Car.o ToyotaWheel.o LamborghiniWheel.o FerrariWheel.o FerrariDoor.o LamborghiniDoor.o ToyotaDoor.o main.o
	g++ -o main main.o Client.o FerrariFactory.o ToyotaFactory.o LamborghiniFactory.o Car.o ToyotaWheel.o LamborghiniWheel.o FerrariWheel.o FerrariDoor.o LamborghiniDoor.o ToyotaDoor.o
main.o : AbstractFactory.h FerrariFactory.h LamborghiniFactory.h ToyotaFactory.h Car.h main.cpp
	g++ -c -Wall --std=c++17 main.cpp
Client.o: AbstractFactory.h Car.h Client.h Client.cpp
	g++ -c -Wall --std=c++17 Client.cpp
FerrariFactory.o: FerrariWheel.h AbstractWheel.h FerrariDoor.h AbstractDoor.h Car.h FerrariFactory.h FerrariFactory.cpp
	g++ -c -Wall --std=c++17 FerrariFactory.cpp	
LamborghiniFactory.o: LamborghiniWheel.h AbstractWheel.h LamborghiniDoor.h AbstractDoor.h Car.h LamborghiniFactory.h LamborghiniFactory.cpp
	g++ -c -Wall --std=c++17 LamborghiniFactory.cpp	
ToyotaFactory.o: ToyotaWheel.h AbstractWheel.h ToyotaDoor.h AbstractDoor.h Car.h ToyotaFactory.h ToyotaFactory.cpp
	g++ -c -Wall --std=c++17 ToyotaFactory.cpp	
Car.o: AbstractWheel.h AbstractDoor.h car.h car.cpp
	g++ -c -Wall --std=c++17 car.cpp
ToyotaWheel.o: ToyotaWheel.h AbstractWheel.h ToyotaWheel.cpp
	g++ -c -Wall --std=c++17 ToyotaWheel.cpp	
LamborghiniWheel.o: LamborghiniWheel.h AbstractWheel.h LamborghiniWheel.cpp
	g++ -c -Wall --std=c++17 LamborghiniWheel.cpp	
FerrariWheel.o: FerrariWheel.h AbstractWheel.h FerrariWheel.cpp
	g++ -c -Wall --std=c++17 FerrariWheel.cpp	
ToyotaDoor.o: ToyotaDoor.h AbstractWheel.h ToyotaDoor.cpp
	g++ -c -Wall --std=c++17 ToyotaDoor.cpp
FerrariDoor.o: FerrariDoor.h AbstractWheel.h FerrariDoor.cpp
	g++ -c -Wall --std=c++17 FerrariDoor.cpp
LamborghiniDoor.o: LamborghiniDoor.h AbstractWheel.h LamborghiniDoor.cpp
	g++ -c -Wall --std=c++17 LamborghiniDoor.cpp
clean:
	rm -rf *.o main