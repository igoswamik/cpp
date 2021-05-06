#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    string s;
    cin >> s;
    int star = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            star++;
        }
    }
    if (star <= 1)
    {
        cout << 0 << endl;
        return;
    }

    ll count = 0;
    ll left = 0;
    ll right = star;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            left++;
            right--;
        }
        else
        {
            if (left < right)
            {
                count += left;
            }
            else
            {
                count += right;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}