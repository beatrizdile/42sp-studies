#include <iostream>

/*Here we have a virtual function "play" that allows for derived classes to 
implement their own version of this method and in case it isn't implemented,
the function of the base class will be used.*/

class Instrument
{
	public:
		virtual void play()
		{
			std::cout << "Playing instrument" << std::endl;
		}
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

int main()
{
	Instrument* instrument = new Instrument();
	Instrument* piano = new Piano();

	piano->play();
	instrument->play();
	return (0);
}
