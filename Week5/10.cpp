#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int *createRanArray(int n)
{
    int *res = new int[n + 1];
    for (int i = 0; i < n; i++) {
        *res = rand() % 50;
        cout << *res << " ";
        res++;
    }
    cout << "\n";

    return res;
}

int main()
{
    srand(time(nullptr));
    int N;
    cin >> N;

    int *arr = createRanArray(N);
    for (int i = 0; i < N; i++) 
        cout << arr[i] << " ";
    cout << "\n";
    for (int i = 0; i < N; i++) for (int j = i + 1; j < N; j++) for (int k = j + 1; k < N; k++) 
        if ( (arr[i] + arr[j] + arr[k]) % 25 == 0 ) cout << arr[i] << " " << arr[j] << " " << arr[k] << "\n";
}