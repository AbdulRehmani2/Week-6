#include <iostream>

using namespace std;

string checkTitle(int age, char gender);

main()
{
    int age;
    char gender;
    string result;
    
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your gender (m, f) : ";
    cin >> gender;

    result = checkTitle(age, gender);

    cout << result;

}

string checkTitle(int age, char gender)
{
    string result;
    if(gender == 'm')
    {
        if(age < 16)
        {
            result = "Master";
        }
        else
        {
            result = "Mr. ";
        }
    }
    else if(gender == 'f')
    {
        if(age < 16)
        {
            result = "Miss";
        }
        else
        {
            result = "Ms. ";
        }
    }
    return result;
}