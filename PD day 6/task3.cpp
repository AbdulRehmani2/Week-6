#include <iostream>

using namespace std;

main()
{
	int day;
	string month;

	cout << "Enter the day : ";
	cin >> day;
	cout << "Enter the month : ";
	cin >> month;

	if ((day >= 19 && month == "January") || (day <= 18 && month == "February"))
	{
		cout << "Aquarius";
	}
	else if ((day >= 19 && month == "February") || (day <= 20 && month == "March"))
	{
		cout << "Pisces";
	}
	else if ((day >= 21 && month == "March") || (day <= 19 && month == "April"))
	{
		cout << "Aries";
	}
	else if ((day >= 20 && month == "April") || (day <= 20 && month == "May"))
	{
		cout << "Tarus";
	}
	else if ((day >= 21 && month == "May") || (day <= 20 && month == "June"))
	{
		cout << "Gemini";
	}
	else if ((day >= 21 && month == "June") || (day <= 22 && month == "July"))
	{
		cout << "Cancer";
	}
	else if ((day >= 23 && month == "July") || (day <= 22 && month == "August"))
	{
		cout << "Leo";
	}
	else if ((day >= 23 && month == "August") || (day <= 22 && month == "September"))
	{
		cout << "Virgo";
	}
	else if ((day >= 23 && month == "September") || (day <= 22 && month == "October"))
	{
		cout << "Libra";
	}
	else if ((day >= 23 && month == "October") || (day <= 21 && month == "November"))
	{
		cout << "Scorpio";
	}
	else if ((day >= 22 && month == "November") || (day <= 21 && month == "December"))
	{
		cout << "Sagittarius";
	}
	else if ((day >= 22 && month == "December") || (day <= 19 && month == "January"))
	{
		cout << "Sagittarius";
	}

}