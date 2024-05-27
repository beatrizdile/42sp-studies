#include <iostream>

/*A pure virtual function is a function that must be overridden in any derived
class. It's declared in a base class and has no body. Instead, it is set equal
to 0. If a class contains at least one pure virtual function, then the class
becomes abstract. Abstract classes cannot be instantiated, and they are meant
to be inherited by other classes. The derived classes are required to implement
these pure virtual functions, or they, too, will become abstract classes.*/

class Instrument
{
	public:
		virtual void play() = 0;
	private:

};

class Piano : public Instrument
{
	public:
		void play()
		{
			std::cout << "Playing piano" << std::endl;
		}
	private:

};

class Guitar : public Instrument
{
	public:
		void play()
		{
			std::cout << "Playing guitar" << std::endl;
		}
	private:

};

int main()
{
	//Instrument *instrument = new Instrument(); // Error: cannot instantiate abstract class
	Instrument* piano = new Piano();
	Instrument* guitar = new Guitar();

	piano->play();
	guitar->play();

	return (0);
}
