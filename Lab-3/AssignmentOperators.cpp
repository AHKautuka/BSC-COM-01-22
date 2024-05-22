#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;
	
	c = a;
	cout << "Line 1 - = Operator, Value of c is : " << c << endl;
	
	c += a;
	cout << "Line 2 - += Operator, Value of c is : " << c << endl;
	
	c -= a;
	cout << "Line 3 - -= Operator, Value of c is : " << c << endl;
	
	c *= a;
	cout << "Line 4 - *= Operator, Value of c is : " << c << endl;
	
	c /= a;
	cout << "Line 5 - /= Operator, Value of c is : " << c << endl;
	
	c = 200;
	c %= a;
	cout << "Line 6 - %= Operator, Value of c is : " << c << endl;
	
	c <<= 2;
	cout << "Line 7 - <<= Operator, Value of c is : " << c << endl;
	
	c >>= 2;
	cout << "Line 7 - >>= Operator, Value of c is : " << c << endl;
	
	c &= 2;
	cout << "Line 7 - &= Operator, Value of c is : " << c << endl;
	
	c ^= 2;
	cout << "Line 7 - ^= Operator, Value of c is : " << c << endl;
	
	c |= 2;
	cout << "Line 7 - |= Operator, Value of c is : " << c << endl;
	
	return 0;
}