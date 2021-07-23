#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> a, b;
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
        m[i + 1]++;
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.count(b[i]) > 0)
        {
            m.erase(b[i]);
            k++;
        }
        else
            b[i] = -1;
    }

    for (int j = 0; j < n; j++)
    {

        if (b[j] == -1)
        {
            int x = m.begin()->first;
            m.erase(m.begin());
            if (x != j + 1)
                b[j] = x;
            else
            {
                if (m.size() > 0)
                {
                    int y = m.begin()->first;
                    m.erase(m.begin());
                    m[x]++;
                    b[j] = y;
                }
                else
                {
                    b[j] = a[j];
                    int f = a[j];
                    for (int i = 0; i < n; i++)
                    {
                        if (i != j && b[i] == f)
                        {
                            b[i] = x;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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