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

void printSubscriptionNotification(unsigned int daysUntilExpiration)
{
	switch (daysUntilExpiration)
	{
	case 0:
		cout << "Your subscription has expired.\n";
		break;
	
	case 1:
		cout << "Your subscription expires within a day!\n";
		cout << "Renew now and save 20%!\n";
		break;
	
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
		cout << "Renew now and save 10%!\n";
		break;
	
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		cout << "Your subscription will expire soon. Renew now!\n";
		break;
	
	default:
		cout << "You have an active subscription.\n";
		break;
	}
}