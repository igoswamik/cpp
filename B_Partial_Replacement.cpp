#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, start, end;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                s[i] = 'x';
                start = i;
                count++;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'x')
            {
                end = i;
                break;
            }
            if (s[i] == '*')
            {
                s[i] = 'x';
                end = i;
                count++;
                break;
            }
        }
        int i = start + k;
        bool flag = false;
        while (i <= end)
        {
            int j = i - k;
            int z = i;
            while (z > j)
            {
                if (s[z] == 'x')
                {

                    i = z + k;
                    break;
                }
                if (s[z] == '*')
                {
                    count++;
                    i = z + k;
                    break;
                }
                z--;
            }
        }
        cout << count << endl;
    }
    return 0;
}