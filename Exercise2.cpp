#include <iostream>
#include <cstdlib>
using namespace std;

void printSubscriptionNotification(unsigned int daysUntilExpiration);

int main()
{
	unsigned int daysUntilExpiration = rand() % 12;
	
	printSubscriptionNotification(daysUntilExpiration);
	cout << endl;
	
	return 0;
}