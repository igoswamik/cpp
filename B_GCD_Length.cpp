#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int k)
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = a - c;
        int d2 = b - c;
        long long aa = 1;
        long long bb = 1;
        for (int i = 1; i <= d1; i++)
        {
            aa *= 10;
        }
        for (int i = 1; i <= d2; i++)
        {
            bb *= 10;
        }
        bb += 1;
        long long cc = 1;
        for (int i = 1; i < c; i++)
        {
            cc *= 10;
        }
        aa *= cc;
        bb *= cc;
        cout << aa << " " << bb << endl;
    }
    return 0;
}