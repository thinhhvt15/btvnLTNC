#include <iostream>
#include <math.h>

using namespace std;

double way1(double x)
{
    if (x >= 0) {
        if (x - floor(x) >= 0.5) return ceil(x);
        return floor(x);
    }

    if (x - floor(x) >= 0.5) return floor(x);
    return ceil(x);
}

double way2(double x)
{
    int s = x;
    if (x >= s + 0.5) return double(s + 1);
    return double(s);
}

int main()
{
    double x;
    cin >> x;

    cout << way1(x) << " " << way2(x);
}