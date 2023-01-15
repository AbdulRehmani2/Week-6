#include <iostream>

using namespace std;

string isInside(int x, int y, int h);

main()
{
	int h, x, y;
	string result;
	cout << "Enter the value of  h : ";
	cin >> h;
	cout << "Enter the value of x : ";
	cin >> x;
	cout << "Enter the value of y : ";
	cin >> y;
	result = isInside(x, y, h);
	cout << result;

}

string isInside(int x, int y, int h)
{
	string result;
	if (x < 3 * h && y < h || ((x > h && x < 2*h) && y < 4*h))
	{
		result = "inside";
	}
	else if (y == 0 || (y == h && (x <= h || x >= 2 * h) || (y == 4 * h && (x >= h || x <= 2 * h) || (x == 2 && y <= 4 * h) || (x == 4 && y <= 4 * h))))
	{
		result = "border";
	}
	else
	{
		result = "outside";
	}
	return result;
}