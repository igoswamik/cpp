#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    int mx = n * n;
    int num = 1;
    bool is = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num <= mx)
            {
                cout << num << " ";
                num += 2;
            }
            else
            {
                if (is)
                {
                    num = 2;
                    is = false;
                }
                cout << num << " ";
                num += 2;
            }
        }
        cout << endl;
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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}