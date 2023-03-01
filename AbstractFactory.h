ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY

class AbstractFactory {
	public:
		virtual AbstractDoor *create_door(string Color) =0;
		virtual AbstractWheel *create_wheel(string wheel) =0; 
};

#endif
