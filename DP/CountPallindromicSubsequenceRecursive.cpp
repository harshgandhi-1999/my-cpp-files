#include <bits/stdc++.h>
using namespace std;
int countPS(string str, int i, int j)
{
    if (i > j)
        return 0;

    if (i == j)
        return 1;

    if (str[i] == str[j])
    {
        // two cases arise
        // for including = (1 + countPS(str, i + 1, j - 1));
        // for excluding  = (countPS(str, i, j - 1) + countPS(str, i + 1, j) - countPS(str, i + 1, j - 1));  //subtracting because it is common
        // now adding both included and excluded cases we get = 1 + countPS(str,i,j-1) + countPS(str,i+1,j);
        return 1 + countPS(str, i, j - 1) + countPS(str, i + 1, j);
    }
    else
    {
        return countPS(str, i, j - 1) + countPS(str, i + 1, j) - countPS(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "abcb";
    cout << "Total palindromic subsequence are : "
         << countPS(str, 0, str.length() - 1) << endl;
    return 0;
}