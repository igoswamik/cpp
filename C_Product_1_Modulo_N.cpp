#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    ll ans = 1;
    ll count = 0;
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        int x = __gcd(i, n);
        if (x == 1)
        {
            count++;
            v.push_back(i);
            ans = (ans * i) % n;
        }
    }
    int p = ans % n;
    if (p == 1)
    {
        cout << count << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << count - 1 << endl;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != p)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    solve(n);

    return 0;
}