#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
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
        if (n % 2 == 1)
        {
            cout << "Bob" << endl;
        }
        else
        {
            ll x = 0;
            for (; n % 2 == 0; n = n / 2)
            {
                x++;
            }
            if (n > 1)
            {
                cout << "Alice" << endl;
            }
            else
            {
                if (x % 2 == 1)
                {
                    cout << "Bob" << endl;
                }

                else
                {
                    cout << "Alice" << endl;
                }
            }
        }
    }
    return 0;
}