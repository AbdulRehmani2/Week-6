#include <iostream>

using namespace std;

main()
{
	string name;
	int marks1, marks2, marks3, marks4, marks5, total;
	float percentage;
	string grade;
	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter the marks in English : ";
	cin >> marks1;
	cout << "Enter the marks in Maths : ";
	cin >> marks2;
	cout << "Enter the marks in Chemistry : ";
	cin >> marks3;
	cout << "Enter the marks in Social Sciences : ";
	cin >> marks4;
	cout << "Enter the marks in Biology : ";
	cin >> marks5;
	total = marks1 + marks2 + marks3 + marks4 + marks5;
	percentage = total * 100 / 500;
	if (percentage <= 100 && percentage > 90)
	{
		grade = "A+";
	}
	else if (percentage <= 90 && percentage > 80)
	{
		grade = "A";
	}
	else if (percentage <= 80 && percentage > 70)
	{
		grade = "B+";
	}
	else if (percentage <= 70 && percentage > 60)
	{
		grade = "B";
	}
	else if (percentage <= 60 && percentage > 50)
	{
		grade = "C";
	}
	else if (percentage <= 50 && percentage > 40)
	{
		grade = "D";
	}
	else if (percentage <= 40)
	{
		grade = "F";
	}
	cout << "Name : " << name << endl;
	cout << "Marks : " << total << endl;
	cout << "Percentage : " << percentage << endl;
	cout << "Grade : " << grade << endl;
}