int main()
{
	int 	  a = 42;					// Reference value

	int const *b = &a;					// Implicit type qualifier cast
	int const *c = (int const *) &a;	// Explicit type qualifier cast

	int const *d = &a;					// Implicit promotion -> Ok
	int 	  *e = d;					// Implicit demotion  -> Hazardous!
	int 	  *f = (int *) d;			// Explicit demotion  -> Ok, you're in charge
}
