#include "Person.h"

Person::Person()
{
	mFirstName = "";
	mWeight = 0.0f;
	mAge = 0;
}

Person::Person(float newWeight)
{
	mFirstName = "";
	mWeight = newWeight;
	mAge = 0;
}

Person::Person(string newFirstName, float newWeight)
{
	mFirstName = newFirstName;
	mWeight = newWeight;
	mAge = 0;
}

Person::~Person()
{
	
}

float Person::operator + (const Person& otherPerson)
{
	float totalWeight = this->mWeight + otherPerson.mWeight;
	return totalWeight;
}

bool Person::operator == (const Person& otherPerson)
{
	if (this->mFirstName.compare(otherPerson.mFirstName) != 0)
	{
		return false;
	}
	if (this->mAge != otherPerson.mAge)
	{
		return false;
	}
	if (this->mWeight != otherPerson.mWeight)
	{
		return false;
	}
	return true;
}

bool Person::operator != (const Person& otherPerson)
{
	return !(this->operator==(otherPerson));
}

bool Person::operator < (const Person& otherPerson)
{
	return this->mAge < otherPerson.mAge;
}

bool Person::operator > (const Person& otherPerson)
{
	return this->mAge > otherPerson.mAge;
}
	
Person::operator int ()
{
	return mAge;
}