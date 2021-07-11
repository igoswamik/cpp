#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string s)
{
    int lasti = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            continue;
        }

        if (lasti == -1)
            lasti = i;
        else
        {
            int ci = i, cr = s[i] - 48;
            int li = lasti, lr = s[lasti] - 48;
            int leftm = ci - cr;
            int rightm = li + lr;
            if (leftm <= rightm)
            {
                return false;
            }
            lasti = i;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (solve(s))
            cout << "safe" << endl;
        else
            cout << "unsafe" << endl;
    }
    return 0;
}