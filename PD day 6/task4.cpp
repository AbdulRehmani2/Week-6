#include <iostream>

using namespace std;

float charges(char, char, int);

main()
{
	char type;
	char time;
	int min;
	float total;
	cout << "Enter which type of customer you are (Residential or Premuim) select (r/p) : ";
	cin >> type;
	cout << "Press D for day time and N for night time : ";
	cin >> time;
	cout << "Enter the number of minutes you have used the service : ";
	cin >> min;
	total = charges(type, time, min);
	cout << "The charges are : " << total << "$";
	
}

float charges(char type, char time, int min)
{
	float total;
	if (type == 'r' || type == 'R')
	{
		if (min <= 50)
		{
			total = 10;
		}
		else
		{
			min = min - 50;
			total = total + (0.2 * min);
		}
	}
	else if (type == 'P' || type == 'p')
	{
		if (time == 'd' || time == 'D')
		{
			if (min <= 75)
			{
				total = 25;
			}
			else
			{
				min = min - 75;
				total = total + (0.1 * min);
			}
		}
		else if (time == 'N' || time == 'n')
		{
			if (min <= 100)
			{
				total = 25;
			}
			else
			{
				min = min - 100;
				total = total + (0.05 * min);
			}
		}
		else
		{
			cout << "Invalid Input";
		}
	}
	else
	{
		cout << "Invalid Input";
	}
	return total;
}