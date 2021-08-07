#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll help(ll **arr, int i, ll n)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    ll xi = 0, xni = 0, tot = 0; 
    for (int j = 0; j < n; j++)
    {
        int ic = 0, ni = 0;
        for (int k = 0; k < 5; k++)
        {
            if (k == i)
            {
                ic += arr[k][j];
            }
            else
            {
                ni += arr[k][j];
            }
        }

        if (ic > ni)
        {
            tot++;
            xi += ic;
            xni += ni;
        }
        else
        {
            pq.push(ni - ic);
        }
    }
    ll ex = xi - xni;
    while (ex > 0 && pq.size() > 0)
    {
        if (ex > pq.top())
        {
            ex -= pq.top();
            pq.pop();
            tot++;
        }
        else
        {
            break;
        }
    }
    return tot;
}


void solve()
{
    ll n;
    cin >> n;
    ll **arr = new ll *[5];  //initialise 5*n  2d array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new ll[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;                                //store count of all 5 characters in each words in corresponding column of aor 2d array
        for (int j = 0; j < s.length(); j++)
        {
            int x = s[j] - 'a';
            arr[x][i]++;
        }
    }

    ll ans = 0;
    for (int i = 0; i < 5; i++)  //calculate seperately for each of the 5 characters
    {
        ans = max(ans, help(arr, i, n));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}