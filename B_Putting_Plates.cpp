#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int h = 0, w = 0;
int help(vector<vector<int>> &a, int x, int y)
{
    int count = 0;
    int i = 0, j = y;
    while (j < w)
    {
        a[i][j] = 1;
        count++;
        j += 2;
    }
    i = 1, j = w - 1;
    if (a[0][w - 1] == 1 || a[0][w - 2] == 1)
        i = 2;
    while (i < h)
    {
        a[i][j] = 1;
        count++;
        i += 2;
    }
    i = h - 1;
    j = w - 2;
    if (a[h - 1][w - 1] == 1 || a[h - 2][w - 1])
        j = w - 3;
    while (j >= 0)
    {
        a[i][j] = 1;
        count++;
        j -= 2;
    }
    j = 0;
    i = h - 2;
    if (a[h - 1][0] == 1 || a[h - 1][1] == 1)
        i = h - 3;
    while (i >= 0)
    {
        if (i <= 1)
        {
            if (a[0][0] == 1 || a[0][1] == 1)
                break;
        }
        a[i][j] = 1;
        count++;
        i -= 2;
    }
    return count;
}

void printf(vector<vector<int>> &a)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
void init(vector<vector<int>> &a)
{
    for (int i = 0; i < h; i++)
    {
        vector<int> v;
        int x = 0;
        for (int j = 0; j < w; j++)
            v.push_back(x);

        a.push_back(v);
    }
}
void solve()
{

    cin >> h >> w;

    vector<vector<int>> a1, a2, a3;
    init(a1);
    init(a2);
    init(a3);

    int ans1 = help(a1, 0, 0);
    int ans2 = help(a2, 0, 1);
    int ans3 = help(a3, 0, 2);
    //cout << "ans1=" << ans1 << endl;
    if (ans1 >= ans2 && ans1 >= ans3)
        printf(a1);
    else if (ans2 >= ans1 && ans2 >= ans3)
        printf(a2);
    else
        printf(a3);

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
        // string str; //for reading empty line
        // getline(cin, str);
        // ll n;
        // cin >> n;
        solve();
    }
    return 0;
}