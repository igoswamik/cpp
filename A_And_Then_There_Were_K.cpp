#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    int count = 0;

    for (int i = 0; i < 31; i++)
    {
        if (1 << i & n)
        {
            count = i;
        }
    }
    count--;
    int k = 0;
    while (count >= 0)
    {
        k += (1 << count);
        count--;
    }

    cout << k << endl;
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