#include <iostream>

using namespace std;

float totalIncome(string, int, int);

main()
{
    int row, column;
    float result;
    string hall;
    cout << "Enter the no. of rows : ";
    cin >> row;
    cout << "Enter the no. of columns : ";
    cin >> column;
    cout << "Enter the hall type : ";
    cin >> hall;
    result = totalIncome(hall, row, column);
    cout << "The total income is : " << result;
}

float totalIncome(string hall, int row, int column)
{
    int total;
    float result;
    if(hall == "Premiere")
    {
        total = row * column;
        result = total * 12.0;
    }
    else if(hall == "Normal")
    {
        total = row * column;
        result = total * 7.5;
    }
    else if(hall == "Discount")
    {
        total = row * column;
        result = total * 5.0;
    }
    return result;
}