#include <iostream>
using namespace std;

// We can create our own exception classes
class custom_exception : public exception
{
	virtual const char* what() const noexcept
	{
		return "Custom exception thrown!";
	};
};

void myFunction2(){
	// throw 5.4;
	throw custom_exception();
};

void myFunction()
{
	myFunction2();
};

int main()
{
	// string word = "fouR";

	// try
	// {
	// 	cout << word.at(4) << endl;
	// }
	// catch(...) // This catches all exceptions
	// {
	// 	std::cerr << "Exception thrown" << endl;
	// }


	// try
	// {
	// 	cout << word.at(4) << endl;
	// }
	// catch(out_of_range& e) // This catches out_of_range type exceptions
	// {
	// 	std::cerr << "Exception: " << e.what() << endl;
	// }

	// We can throw exceptions of any type, even an integer
	// and we can throw exceptions even inside functions


	try
	{
		// cout << word.at(4) << endl;
		// int *array = new int[999999999999999];
		// array[0] = 1;
		// throw custom_exception();
		// throw 20;
		// throw 5.4;
		myFunction();
	}
	catch(out_of_range& e) // This catches out_of_range type exceptions
	{
		std::cerr << "First Catch: " << e.what() << endl;
	}
	catch(bad_alloc& e) // This catches bad_alloc type exceptions
	{
		std::cerr << "Second Catch: " << e.what() << endl;
	}
	catch(exception& e) // This class encompasses all exceptions
	{
		std::cerr << "Exception thrown: " << e.what() << endl;
	}
	catch(int code) // This catches all exceptions in a last case scenario
	{
		std::cerr << "Error code: " << code << endl;
	}
	catch(...) // This catches all exceptions in a last case scenario
	{
		std::cerr << "Default catch case!" << endl;
	}



		// Exception hierarchy, each of them is a class:
		//
		// 				exception
		// 					|
		// 		-------------------------
		// 		|			|			|
		// logic error	 bad_alloc	 runtime_error
		// out_of_range

	return 0;
}
