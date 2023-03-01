#ifndef ABSTRACT_WHEEL
#define ABSTRACT_WHEEL

class AbstractWheel {
	public:
		int Color;
		int Diameter;

		virtual void printInfo() =0;

};

#endif
