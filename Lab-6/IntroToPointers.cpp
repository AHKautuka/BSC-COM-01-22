#include <iostream>
using namespace std;

int main()
{
	// declare pointer and initialize it
	// so that it doesn't store a random address
	int* pPointer = nullptr;
	
	int integerVar = 5;
	
	// assign pointer to address of object
	pPointer = &integerVar;
	
	//output the value of integerVar
	cout << "integerVar: " << integerVar << endl;
	
	//output the address of integerVar
	cout << "Address of integerVar: " << &integerVar << endl;
	
	//output the address assigned to pPointer
	cout << "pPointer: " << pPointer << endl;
	
	//output the address of pPointer
	cout << "Address of pPointer: " << &pPointer << endl;
	
	cout << "Value at address pPointer++:" << *pPointer++ << "\n";
	cout << "Value at address ++pPointer:" << *++pPointer << "\n";
	cout << "++Value at address pPointer:" << ++*pPointer << "\n";
	cout << "Value++ at address pPointer:" << (*pPointer)++ << "\n";
	
	return 0;
}
