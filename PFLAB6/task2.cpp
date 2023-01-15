#include <iostream>

using namespace std;

float discount(int price, string day, string month);

main()
{
    int price;
    string day, month;
    float result;

    cout << "Enter the price : ";
    cin >> price;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the month : ";
    cin >> month;
    result = discount(price, day, month);
    cout << "The total price is : " << result;
}

float discount(int price, string day, string month)
{
    float result = price;
    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        result = price * 0.9;
    }
    else if(day == "Monday" && (month == "November" || month == "December"))
    {
        result = price * 0.95;
    }
    return result;
}