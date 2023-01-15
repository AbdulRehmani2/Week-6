#include <iostream>

using namespace std;

int playtime(string year, int holiday, int weekends);

main()
{
	string year;
	int holidays;
	int weekends;
	int result;
	cout << "Enter the year : ";
	cin >> year;
	cout << "Enter the holidays : ";
	cin >> holidays;
	cout << "Enter the weekends : ";
	cin >> weekends;
	result = playtime(year, holidays, weekends);
	cout << result;
	
}

int playtime(string year, int holiday, int weekends)
{
	int time;
	int sunday = weekends;
	weekends = 48 - weekends;
	weekends = 3 * weekends / 4;
	holiday = 2 * holiday / 3;
	time = weekends + holiday + sunday;
	if (year == "leap")
	{
		time = time * 1.15;
	}
	return time;
}