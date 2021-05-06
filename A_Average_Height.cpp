#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}