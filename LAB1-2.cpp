#include <iostream>
using namespace std;
int main()

{
	int n;
	int m;

	cin >> n;
	cin >> m;

	cout << "\n" << (n++ + m);
	cout << "\n" << (m-- > n);
	cout << "\n" << (n-- > m);

	return 0;
}
