#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double y, x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (a < 0 && x != 0)
			F = -a * x * x;
		if (a > 0 && x == 0)
			F = x - a / (c * x);
		if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
			F = x / c;
		y = x;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;

	}
	cout << "---------------------------" << endl;
	return 0;
}