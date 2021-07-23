#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s, int i, string t)
{
}
void solve()
{
    string s;
    cin >> s;
    int o1 = 0, z1 = 0, q1 = 0, o2 = 0, z2 = 0, q2 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '1')
                o1++;
            else if (s[i] == '0')
                z1++;
            else
                q1++;

            c1++;
        }
        else
        {
            if (s[i] == '1')
                o2++;
            else if (s[i] == '0')
                z2++;
            else
                q2++;
            c2++;
        }

        int mx1, mx2, mi1, mi2;
        mx1 = o1 + q1;
        mx2 = o2 + q2;
        mi1 = o1;
        mi2 = o2;
        if (mx1 - mi2 > 5 - c2 || mx2 - mi1 > 5 - c1)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 10 << endl;
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