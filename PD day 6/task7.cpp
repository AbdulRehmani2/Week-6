#include <iostream>
#include <cmath>

using namespace std;

main()
{
	int examHour;
	int examMin;
	int studentHour;
	int studentMin;
	int totalH1;
	int totalM;
	int totalH2;
	int result;
	cout << "Exam Starting time (hours) : ";
	cin >> examHour;
	cout << "Exam Starting time (min) : ";
	cin >> examMin;
	cout << "Student arrival time (hours) : ";
	cin >> studentHour;
	cout << "Student arrival time (min) : ";
	cin >> studentMin;
	totalH1 = examHour * 60 + examMin;
	totalH2 = studentHour * 60 + studentMin;
	if (totalH1 > totalH2)
	{
		result = totalH1 - totalH2;
		if (result > 30)
		{
			cout << "Early" << endl;
		}
		else
		{
			cout << "On Time" << endl;
		}
		totalH1 = result / 60;
		result = result % 60;
		cout << totalH1 << " : " << result << " before the start";
	}
	else if (totalH1 == totalH2)
	{
		cout << "On time";
	}
	else
	{
		cout << "Late" << endl;
		result = totalH2 - totalH1;
		totalH1 = result / 60;
		result = result % 60;
		cout << totalH1 << " : " << result << " after the start";
	}
}