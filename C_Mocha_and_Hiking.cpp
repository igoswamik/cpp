#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    if (arr[n] == 0)
    {
        for (int i = 1; i <= n + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (arr[1] == 1)
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    vector<int> v;
    bool flag = false;
    int i = 1;
    for (; i < n; i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 1)
        {
            v.push_back(i);
            v.push_back(n + 1);
            i++;
            flag = true;
            break;
        }
        v.push_back(i);
    }

    if (flag)
    {
        while (i <= n)
        {
            v.push_back(i);
            i++;
        }
        for (auto a : v)
            cout << a << " ";

        cout << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
    }
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