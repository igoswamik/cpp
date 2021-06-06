//Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

// //Recursion
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// //memoization
// int memo[10000] = {0};
// int fib(int n)
// {
//     if (n <= 1)
//         return n;

//     if (memo[n] != 0)
//         return memo[n];

//     memo[n] = fib(n - 1) + fib(n - 2);
//     return memo[n];
// }

//dynamic Programming
int fib(int n)
{
    int dp[n + 2]; // 0th and 1st number of the series are 0 and 1

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; //Add the previous 2 numbers in the series and store it
    }
    return dp[n];
}

int main()
{

    int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}
