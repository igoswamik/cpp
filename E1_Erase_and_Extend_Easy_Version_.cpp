#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll k;
    cin >> k;

    string str;
    cin >> str;
    int i = 1;
    for (; i < n; i++)
    {
        if (str[i] > str[0])
            break;
        else if (str[i] == str[0])
        {
            int j = 1, k = i + 1;
            while (j < i && k < n)
            {
                if (str[j] == str[k])
                {
                    j++;
                    k++;
                }
                else
                {
                    break;
                }
            }
            if (k == n)
            {
                break;
            }
            else
            {

                if (str[k] > str[j])
                {
                    break;
                }
                else
                {
                    i = k;
                }
            }
        }
    }
    if (i < n)
    {
        str = str.substr(0, i);
    }
    int sz = str.size();
    if (sz > 2 && str[0] == str[sz - 1] && str[sz - 2] < str[sz - 1])
    {
        str = str.substr(0, sz - 1);
    }
    while (str.size() < k)
    {
        str = str + str;
    }
    if (str.size() > k)
    {
        str = str.substr(0, k);
    }
    cout << str << endl;
}

int main()
{

    ll n;
    cin >> n;
    solve(n);
    return 0;
}