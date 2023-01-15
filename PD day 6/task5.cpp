#include <iostream>

using namespace std;

float charges(string, string, int);

main()
{
	string fruit, day;
	int quantity;
	float total;
	cout << "Enter the fruit : ";
	cin >> fruit;
	cout << "Enter the day : ";
	cin >> day;
	cout << "Enter the quantity : ";
	cin >> quantity;
	total = charges(fruit, day, quantity);
	cout << total;
}

float charges(string fruit, string day, int quantity)
{
	float total;
	if (fruit == "banana")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 2.5;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 2.7;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "apple")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 1.2;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 1.25;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "orange")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 0.85;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 0.9;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "grapefruit")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 1.45;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 1.6;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "kiwi")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 2.7;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 3;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "pineapple")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 5.5;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 5.6;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else if (fruit == "grapes")
	{
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
		{
			total = quantity * 3.85;
		}
		else if (day == "Saturday" || day == "Sunday")
		{
			total = quantity * 4.2;
		}
		else
		{
			cout << "Invalid input";
			total = 0;
		}
	}
	else
	{
		cout << "Invalid input";
		return 0;
	}
	return total;
}
