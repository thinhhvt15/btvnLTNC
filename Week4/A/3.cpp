#include <iostream>
#include <string.h>

using namespace std;

char str1[10];
char str2[5] = {"abcd"} ;
char str5[] = {"abcd"};

int main()
{
    char str_1[10];

    char str_2[5] = {"abcd"};
    for (auto i : str_2) cout << i << " "; 
    cout << "\n" << str_2 << "\n"; 

    char str_5[] = {"abcd"};
    cout << sizeof(str_5) << "\n";
    for (int i = 0; i < 10; i++) cout << str_5[i] << " "; 
    cout << "\n" << str_5 << "\n"; 


    char str_6[10] = {"abcd"};
    cout << sizeof(str_6) << " " << strlen(str_6) << "\n";
    for (int i = 0; i < 10; i++) cout << str_6[i] << " ";
    cout << "\n" << str_6 << "\n"; 

    return 0;
}