#include <bits/stdc++.h>

using namespace std;

int to10(string x)
{
    reverse(x.begin(), x.end());
    int res = 0;
    for (int i = 0; i < (int)x.size(); i++) 
        res += pow(2, i);
    
    return res;
}

string to2(int x)
{
    string res = "";
    while(x > 0) {
        res.push_back(x & 1);
        x /= 2;
    }

    reverse(res.begin(), res.end());
    return res;
}
int main()
{

}