/******************************************************************************

                              D1. Painting the Array I
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
The only difference between the two versions is that this version asks the maximal possible answer.

Homer likes arrays a lot. Today he is painting an array a1,a2,…,an with two kinds of colors, white and black. A painting assignment for a1,a2,…,an is described by an array b1,b2,…,bn that bi indicates the color of ai (0 for white and 1 for black).

According to a painting assignment b1,b2,…,bn, the array a is split into two new arrays a(0) and a(1), where a(0) is the sub-sequence of all white elements in a and a(1) is the sub-sequence of all black elements in a. For example, if a=[1,2,3,4,5,6] and b=[0,1,0,1,0,0], then a(0)=[1,3,5,6] and a(1)=[2,4].

The number of segments in an array c1,c2,…,ck, denoted seg(c), is the number of elements if we merge all adjacent elements with the same value in c. For example, the number of segments in [1,1,2,2,3,3,3,2] is 4, because the array will become [1,2,3,2] after merging adjacent elements with the same value. Especially, the number of segments in an empty array is 0.

Homer wants to find a painting assignment b, according to which the number of segments in both a(0) and a(1), i.e. seg(a(0))+seg(a(1)), is as large as possible. Find this number.

Input
The first line contains an integer n (1≤n≤105).

The second line contains n integers a1,a2,…,an (1≤ai≤n).

Output
Output a single integer, indicating the maximal possible total number of segments.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=100010;
ll pos[100010];
ll nxt[100010];
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int a[n+2];
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=0;i<=n;i++) pos[i]=M;
        
        for(int i=n;i>=0;i--){
            nxt[i]=pos[a[i]];
            pos[a[i]]=i;
        }
        
        ll x=0,y=0,count=0;
        for(int z=1;z<=n;z++){
            if(a[x]==a[z]){
                count+=a[y]!=a[z];
                y=z;
            }
            else if(a[y]==a[z]){
                count+=a[x]!=a[z];
                x=z;
            }
            else if(nxt[x]<nxt[y]){
                count+=a[x]!=a[z];
                x=z;
            }
            else{
                count+=a[y]!=a[z];
                y=z;
            }
        }
        cout<<count<<endl;
    // }

    return 0;
}