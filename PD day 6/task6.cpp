#include <iostream>

using namespace std;

main()
{
	string month;
	int stay;
	float apartment, studio;
	cout << "Enter the month : ";
	cin >> month;
	cout << "Enter the no. of days : ";
	cin >> stay;
	if (month == "May" || month == "October")
	{
		studio = stay * 50;
		apartment = stay * 65;
		if (stay >= 7 && stay <= 14)
		{
			studio = studio * 0.95;
		}
		else if (stay >= 14)
		{
			studio = studio * 0.7;
		}
	}
	else if (month == "June" || month == "September")
	{
		studio = stay * 75.2;
		apartment = stay * 68.7;
		if (stay > 14)
		{
			studio = studio * 0.8;
		}
	}
	else if (month == "July" || month == "August")
	{
		studio = stay * 76;
		apartment = stay * 77;
	}
	if (stay > 14)
	{
		apartment = apartment * 0.9;
	}
	cout << "Studio : " << studio << "$" << endl;
	cout << "Apartment : " << apartment << "$";
}