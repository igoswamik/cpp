#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    char match = 'a';
    int i = 0;
    for (; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            break;
        }
    }
    if (i == s.size())
    {
        cout << "NO" << endl;
        return;
    }
    match += 1;
    int j = i - 1;
    int k = i + 1;
    while (j >= 0 || k < s.size())
    {
        if (j >= 0 && s[j] == match)
        {
            match += 1;
            j--;
        }
        else if (k < s.size() && s[k] == match)
        {
            match += 1;
            k++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}