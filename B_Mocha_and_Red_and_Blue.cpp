#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    string s;
    cin >> s;
    int i = 0;
    while (i < n && s[i] == '?')
        i++;

    if (i == n)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                s[j] = 'B';
            else
                s[j] = 'R';
        }
        cout << s << endl;
        return;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (s[j + 1] == 'B')
            s[j] = 'R';
        else
            s[j] = 'B';
    }
    for (int j = i; j < n; j++)
    {
        if (s[j] == '?')
        {
            if (s[j - 1] == 'B')
                s[j] = 'R';
            else
                s[j] = 'B';
        }
    }
    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}