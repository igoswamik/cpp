#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int one = 0, two = 0;
    for (auto t : m)
    {
        if (t.second >= 2)
        {
            two++;
        }
        else
        {
            one++;
        }
    }
    int ans = two + (one) / 2;
    cout << ans << endl;
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

        solve();
    }
    return 0;
}