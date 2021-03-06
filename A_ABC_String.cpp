#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string a, int A,int B,int C){
    //cout<<A<<B<<C<<endl;
    bool AA=false,BB=false,CC=false;
    if(a[0]=='A') AA=true;
    else if(a[0]=='B') BB=true;
    else CC=true;

    if(A==B+C){
         B=C;
         if(BB||CC) BB=CC=true;
    }
    else if(B==A+C){
         A=C;
         if(AA||CC) AA=CC=true;
    } 
    else if(C==A+B){
         B=A;
         if(BB||AA) BB=AA=true;
    } 

   
    //cout<<AA<<BB<<CC<<endl;
stack<char> s;
s.push('(');

for(int i=1;i<a.size();i++){
    if(a[i]==a[0]){
        s.push('(');
    }
    else if(a[i]==a[a.size()-1]){
        if(s.empty()){
            cout<<"NO"<<endl;
            return;
        }
        s.pop();
    }
    else{
        if((a[i]=='B' && BB)||(a[i]=='C' && CC)||(a[i]=='A' && AA)){
            s.push('(');
        }
        else{
            if(s.empty()){
                cout<<"NO"<<endl;
                return;
                }
            s.pop();

        }

    }
}
if(s.empty()){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n=a.length();
        int A=0,B=0,C=0;
        for(int i=0;i<n;i++){
            if(a[i]=='A') A++;
            else if(a[i]=='B') B++;
            else C++;
        }
        char open='(';
        int x=max(A,max(B,C));
        if(x!=A+B+C-x || a[0]==a[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            solve(a,A,B,C);
        }
    }
    return 0;
}