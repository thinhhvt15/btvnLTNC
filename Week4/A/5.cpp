#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    char arr[3] = {65, 66, 67};
    cout << arr[-1] << " " << arr[3] << " " << arr[4] << "\n" ;

    arr[-1] = 'K';
    arr[3] = ')';
    arr[4] = '*';
    cout << arr[-1] << " " << arr[3] << " " << arr[4] << "\n" ;

    char arrN[3][4] ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++ ) {
            cin >> arrN[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arrN[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
