#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int a, int b, string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (s[i] == '?')
            {
                s[i] = s[j];
                if (s[j] == '1')
                    b--;
                else
                    a--;
            }
            else if (s[j] == '?')
            {
                s[j] = s[i];
                if (s[i] == '0')
                    a--;
                else
                    b--;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        i++;
        j--;
    }

    if (a < 0 || b < 0)
    {
        cout << -1 << endl;
        return;
    }
    i = 0;
    j = s.length() - 1;

    while (i <= j)
    {
        if (i == j)
        {
            if (s[i] != '?')
            {
                i++;
                j--;
            }
            else if (s[i] == '?')
            {
                if (a > 0)
                {
                    s[i] = '0';
                    a -= 1;
                    i++;
                    j--;
                }
                else if (b > 0)
                {
                    s[i] = '1';
                    b -= 1;
                    i++;
                    j--;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if (s[i] == s[j] && s[i] != '?')
        {
            i++;
            j--;
        }
        else if (s[i] == s[j])
        {
            if (a >= b && a >= 2)
            {
                s[i] = s[j] = '0';
                a -= 2;
                i++;
                j--;
            }
            else if (b >= a && b >= 2)
            {
                s[i] = s[j] = '1';
                b -= 2;
                i++;
                j--;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }

    if (a == 0 && b == 0)
    {
        cout << s << endl;
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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                a--;
            if (s[i] == '1')
                b--;
        }
        int i = 0, j = s.length() - 1;
        solve(a, b, s);
    }
    return 0;
}