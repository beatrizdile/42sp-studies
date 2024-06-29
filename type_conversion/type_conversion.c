int main()
{
	int a = 42;				// Reference value

	double b = a;			// Implicit conversion cast
	double c = (double) a;	// Explicit conversion cast

	double 	d = a;			// Implicit promotion -> Ok
	int	   	e = d;			// Implicit demotion  -> Hazardous
	int		f = (int) d;	// Explicit demotion  -> Ok, you're in charge
}
