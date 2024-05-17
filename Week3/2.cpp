#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string& b)
{
    string a = b;
    reverse(a.begin(), a.end());
    return (a == b);
}

int main()
{
    string s;
    cin >> s;

    cout << (isPalindrome(s) ? "YES" : "NO");
}