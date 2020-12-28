#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int i;
    int n;
    int k;

    srand(time(nullptr));

    cin >> n;
    cin >> k;

    int a[n];

    for (i = 0; i < n; i++) {
        a[i] = rand() % 100;
        if (i == k) {
            continue;
        }
        cout << a[i] << " ";
        if (i % 2 == 0) {
            cout << "0 ";
        }
    }

    cout << endl;


}
