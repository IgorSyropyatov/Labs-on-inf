include <iostream>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
    int s = 0;
    for (int n = 0; n < 200; n = n + 3)
        s = n + s;
    cout << "Suma=" << s << '\n';
    return 0;
}
