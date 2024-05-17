#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[6];
    int avg = 0;
    for (int i = 1; i <= 5; i++) {
        cin >> a[i];
        avg += a[i];
    }

    avg /= 5;
    int getMin = abs(a[1] - avg);
    int res = a[1];
    for (int i = 2; i <= 5; i++) {
        if (abs(a[i] - avg) < getMin) {
            getMin = abs(a[i] - avg);
            res = a[i];
        }
    }

    cout << res;
}