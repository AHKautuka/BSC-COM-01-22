#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void printSubscriptionNotification(unsigned int daysUntilExpiration);

int main()
{
	srand(time(0));
	unsigned int daysUntilExpiration = rand() % 12;
	
	printSubscriptionNotification(daysUntilExpiration);
	cout << endl;
	
	return 0;
}

void printSubscriptionNotification(unsigned int daysUntilExpiration)
{
	if (daysUntilExpiration > 10)
	{
		cout << "You have an active subscription.\n";
	}
	else if (daysUntilExpiration == 0)
	{
		cout << "Your subscription has expired.\n";
	}
	else if (daysUntilExpiration <= 1)
	{
		cout << "Your subscription expires within a day!\n";
		cout << "Renew now and save 20%!\n";
	}
	else if (daysUntilExpiration <= 5)
	{
		cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
		cout << "Renew now and save 10%!\n";
	}
	else
	{
		cout << "Your subscription will expire soon. Renew now!\n";
	}
}