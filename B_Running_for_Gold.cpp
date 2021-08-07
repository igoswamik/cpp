#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comp(vector<int> v1, vector<int> v2)
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (v1[i] < v2[i])
            c++;
    }
    return c >= 3;
}

void solve(ll n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        temp.push_back(i + 1);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), comp);

    int i = 0;
    int flag = true;
    for (int j = 1; j < n; j++)
    {
        int c = 0;
        for (int k = 0; k < 5; k++)
        {
            if (v[i][k] < v[j][k])
                c++;
        }
        if (c < 3)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << v[0][5] << endl;
        return;
    }

    cout << -1 << endl;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}