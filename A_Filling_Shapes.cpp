// codeforces #566 div2  A
#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
int main()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << (1 << (n / 2)) << endl;
    }
}