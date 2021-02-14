/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long prod1=1,prod2=1,prod3=1;
        prod1*=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
        prod2*=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
        prod3*=arr[n-5]*arr[n-4]*arr[n-1]*arr[n-2]*arr[n-3];
        long long ans=max(prod1,max(prod2,prod3));
        cout<<ans<<endl;
    }

    return 0;
}
