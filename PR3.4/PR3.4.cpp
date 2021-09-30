#include <iostream>
using namespace std;

int main()
{
	double x; 
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (((x * x) + (y * y) < R * R && y < x && x < 0 && y < 0)
		|| (y > x && (x * x) + (y * y) > R && x > 0 && y > 0))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}