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
        int n;
        cin>>n;
        int arr[101]={0};
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>=0)
            {
            arr[x]+=1;
            }
        }
        int flag=-1;
        int i=0;
        for(;i<101;i++)
        {
            if(arr[i]==0)
            {
                flag=0;
                break;
            }
            else if(arr[i]==1)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            sum+=2*i;
            cout<<sum<<endl;
        }
        else if(flag==1)
        {
            int flag2=-1;
            sum+=i;
            int j=i;
            for(;j<101;j++)
            {
                if(arr[j]==0)
                {
                   flag2=0;
                   break;
                }
            }
            if(flag2==0)
            {
                sum+=j;
                cout<<sum<<endl;
            }
            else
            {
                sum+=101;
                cout<<sum<<endl;
            }
        }
        else
        {
            sum+=2*101;
            cout<<sum<<endl;
        }
        
    }

    return 0;
}
