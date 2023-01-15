#include <iostream>

using namespace std;

float cheapest(int distance, string time);

main()
{
    float result;
    int distance;
    string time;
    cout << "Enter the distance : ";
    cin >> distance;
    cout << "Enter the time : ";
    cin >> time; 
    result = cheapest(distance, time);
    cout << result;  
}

float cheapest(int distance, string time)
{
    float result;
    if(distance < 20)
    {
        if(time == "day")
        {
            result = distance * 0.79;
        }   
        else if(time == "night")
        {
            result = distance * 0.9;
        }
        result = result + 0.7;
    }
    else if(distance >= 20 && distance < 100)
    {
        result = distance * 0.09;
    }
    else
    {
        result = distance * 0.06;
    }
    return result;
}