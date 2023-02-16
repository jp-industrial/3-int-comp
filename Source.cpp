#include "c:\users\james\Desktop\std_lib_facilities.h"

int main()

{
	cout << "Please enter three numbers.";
	
	int a, b, c;
	cin >> a >> b >> c;

	if ((a == b) && (b == c))
			cout << "All numbers are equal! " << a << b << c << "\n";
	
	if ((a >= b) && (b >= c))
		cout << c << b << a; //a is greater than b, greater than c(or equal!)

	if ((a <= b) && (b <= c))
		cout << a << b << c; //inverse of above.

	if ((a >= b) && (b <= c))
		if (a >= c)				// we need to make subcalculations.
			cout << b << c << a;
		if (a <= c)
			cout << b << a << c; //is a greater or smaller than c?

		if ((a <= b) && (b >= c)) //how much bigger is b relative to a and c?
			if (a >= c)
				cout << c << a << b;
			if (a <= c)
				cout << a << c << b; 

}