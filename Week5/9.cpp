#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int ran(int N)
{
    return (rand() % N);
}

int main()
{
    srand(time(nullptr));
    cout << ran(10);
}