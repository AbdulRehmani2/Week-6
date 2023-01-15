#include <iostream>

using namespace std;

void activity(string, string);

main()
{
	string temperature;
	string humidity;
	cout << "Enter the temperature : ";
	cin >> temperature;
	cout << "Enter the himidity : ";
	cin >> humidity;
	activity(temperature, humidity);
}

void activity(string temperature, string humidity)
{
	if (temperature == "warm" && humidity == "dry")
	{
		cout << "Play tennis";
	}
	else if (temperature == "warm" && humidity == "humid")
	{
		cout << "Swim";
	}
	else if (temperature == "cold" && humidity == "dry")
	{
		cout << "Play basketball";
	}
	else if (temperature == "cold" && humidity == "humid")
	{
		cout << "Watch TV";
	}
}