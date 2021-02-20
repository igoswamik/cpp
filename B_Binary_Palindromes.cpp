#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int oddlen=0,badstr=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            //cout<<s<<"  ";
            if(s.length()%2!=0){
                oddlen++;
            } 
            else{
                int zeroc=0,onec=0;
                for(int j=0;j<s.length();j++){
                    if(s[j]=='1') onec++;
                    else zeroc++;
                }
                //cout<<"zeroc="<<zeroc<<"  ";
                if(zeroc%2!=0 || onec%2!=0){
                    badstr++;
                }
            }
        }
       // cout<<"n="<<n<<" "<<oddlen<<"  , "<<badstr<<endl;
        if(badstr%2!=0){
            badstr=(oddlen>0)?0:1;
        }
        else{
            badstr=0;
        }

        int ans=n-badstr;
        cout<<ans<<endl;
    }
    return 0;
}