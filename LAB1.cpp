#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	float a;
	float b;
	float c;
	float d;
	float f;

	cin >> a;
	cin >> b;

	c = pow(a + b, 2);
	d = pow(a, 2) + 2 * a * b;
	f = pow(b, 2);

	cout << "\n" << ((c - d) / f);

	return 0;
}
