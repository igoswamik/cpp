#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    string s, y;
    cin >> s;
    y = s;
    sort(y.begin(), y.end());
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (y[i] != s[i])
        {
            k++;
        }
    }
    cout << k << endl;
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