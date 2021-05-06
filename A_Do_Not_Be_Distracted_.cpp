#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    int i = 0;
    while (i < n)
    {
        char ch = s[i];
        while (i < n && s[i] == ch)
        {
            i++;
        }
        if (m.count(ch) > 0)
        {
            cout << "NO" << endl;
            return;
        }
        m[ch]++;
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}