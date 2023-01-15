#include <iostream>

using namespace std;

char calcGrade(int marks);

main()
{
    int marks;
    char result;

    cout << "Enter the marks : ";
    cin >> marks;
    result = calcGrade(marks);
    cout << "The grade is " << result;
    
}

char calcGrade(int marks)
{
    char grade;
    if(marks > 85 && marks <= 100)
    {
        grade = 'A';
    }
    else if(marks > 80 && marks <= 85)
    {
        grade = 'B';
    }
    else if(marks > 70 && marks <= 80)
    {
        grade = 'C';
    }
    else if(marks > 60 && marks <= 70)
    {
        grade = 'D';
    }
    else if(marks > 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if(marks <= 50 && marks >= 0)
    {
        grade = 'F';
    }
    return grade;
}
