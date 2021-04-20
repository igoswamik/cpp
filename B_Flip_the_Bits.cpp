#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compare(int s, int e, string a, string b)
{
    bool flag = true;
    for (int i = s; i <= e; i++)
    {
        if (a[i] != b[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        return true;
    }
    for (int i = s; i <= e; i++)
    {
        if (a[i] == b[i])
            return false;
    }
    return true;
}

void solve(string a, string b, int n)
{
    int a0 = 0, a1 = 0, b0 = 0, b1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            a0++;
        else
            a1++;

        if (b[i] == '0')
            b0++;
        else
            b1++;
    }
    //cout << "a0,a1,b0,b1" << a0 << a1 << b0 << b1 << endl;
    if (a0 != b0 || a1 != b1)
    {
        cout << "NO" << endl;
        return;
    }

    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }

    int zc = 0, oc = 0, lasti = 0;
    bool alleq = true, allop = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            zc++;
        else
            oc++;

        if (a[i] != b[i] && alleq == true)
            alleq = false;

        if (a[i] == b[i] && allop == true)
            allop = false;
        if (zc == oc)
        {
            if (!alleq && !allop)
            {
                cout << "NO" << endl;
                return;
            }
            allop = true;
            alleq = true;
            lasti = i + 1;
        }
    }

    if (lasti < n)
    {
        for (int i = lasti; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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
        string a, b;
        cin >> a >> b;
        solve(a, b, n);
    }
    return 0;
}