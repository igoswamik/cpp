#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isBalanced(string exp, int n)
{
    // Initialising Variables
    bool flag = true;
    int count = 0;

    // Traversing the Expression
    for (int i = 0; i < n; i++)
    {

        if (exp[i] == '(')
        {
            count++;
        }
        else
        {
            // It is a closing parenthesis
            count--;
        }
        if (count < 0)
        {
            // This means there are
            // more Closing parenthesis
            // than opening ones
            flag = false;
            break;
        }
    }

    // If count is not zero,
    // It means there are more
    // opening parenthesis
    if (count != 0)
    {
        flag = false;
    }

    return flag;
}
void solve(string s, int n)
{
    if (s[0] == '0' || s[n - 1] == '0')
    {
        cout << "NO" << endl;
        return;
    }
    string s1 = "(";
    string s2 = "(";
    int op1 = 1, op2 = 1, cl1 = 0, cl2 = 0;

    for (int i = 1; i < n; i++)
    {
        // cout << s1 << "  ,  " << s2 << endl;
        if (s[i] == '0')
        {
            if (op1 == cl1)
            {
                s1 += '(';
                op1++;
                s2 += ')';
                cl2++;
            }
            else
            {
                if (op2 == cl2 || op1 > op2)
                {
                    s2 += '(';
                    op2++;
                    s1 += ')';
                    cl1++;
                }
                else
                {
                    s1 += '(';
                    op1++;
                    s2 += ')';
                    cl2++;
                }
            }
        }
        else
        {
            if (op1 == cl1 || op2 == cl2)
            {
                s1 += '(';
                s2 += '(';
                op1++;
                op2++;
            }
            else
            {
                s1 += ')';
                s2 += ')';
                cl1++;
                cl2++;
            }
        }
    }

    if (isBalanced(s1, n) && isBalanced(s2, n))
    {
        cout << "YES" << endl;
        cout << s1 << endl;
        cout << s2 << endl;
    }
    else
    {
        cout << "NO" << endl;
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
        string s;
        cin >> s;
        solve(s, n);
    }
    return 0;
}