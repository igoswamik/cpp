/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        stack<int> s0,s1,s2;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='0')
            {
                s0.push(0);
            }
            else if(s[i]=='1')
            {
                s1.push(1);
            }
            else
            {
                s2.push(2);
            }
        }
        int flag=0;
        for(int i=k;i<n+1;i++)
        {
            int ss0,ss1,ss2;
            ss0=s0.size();
            ss1=s1.size();
            ss2=s2.size();
            int diff=abs(ss0-ss1);
            int z=diff;
            while(z--)
            {
                s2.pop();
            }
            ss2=ss2-diff;
            if(ss2%2!=0)
            {
                flag=1;
                break;
            }
            if(ss0<ss1)
            {
                while(diff--)
                {
                    s0.push(0);
                }
            }
            else if(ss1<ss0)
            {
                while(diff--)
                {
                    s1.push(1);
                }
            }
            
            if(s[i-k]=='0')
            {
                s0.pop();
            }
            else if(s[i-k]=='1')
            {
                s1.pop();
            }
            else if(s[i-k]=='?')
            {
                s2.pop();
            }
            
            if(s[i]=='0')
            {
                s0.push(0);
            }
            else if(s[i]=='1')
            {
                s1.push(1);
            }
            else if(s[i]=='?')
            {
                s2.push(2);
            }
            if(i==n)
            {
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
        return 0;
}
