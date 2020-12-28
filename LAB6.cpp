#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int size = 255;
    char s[size];
    cin.getline(s, size);

    int len = strlen(s);
    for (int i = 0; i <= len / 2; ++i)
    {
        if (s[i] != s[len - i - 1])
        {
            cout << "No!";
            return 0;
        }
    }

    cout << "Da!";
    return 1;
}
