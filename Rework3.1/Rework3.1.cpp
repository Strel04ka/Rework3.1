#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, A, B;

	// 1 спосіб

	cout << "x = "; cin >> x;

	A = 1 / abs(x + 2) + 1;

	if (x < 1)
		B = 7 * x * x + x - 8;
	if (1 <= x && x <= 4)
		B = 1 / tan((x + 4) / sqrt(11)) + 3;
	if (x > 4)
		B = sqrt(1 + abs(pow(cos(x), 3)));
	y = A - B;
	cout << "1) y = " << y << endl;

	// 2 спосіб

	A = 1 / abs(x + 2) + 1;

	if (x < 1)
		B = 7 * x * x + x - 8;
	else
		if (1 <= x && x <= 4)
			B = 1 / tan((x + 4) / sqrt(11)) + 3;
		else
			if (x > 4)
				B = sqrt(1 + abs(pow(cos(x), 3)));
		y = A - B;
	cout << "1) y = " << y;
}
