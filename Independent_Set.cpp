#include <iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_set<int> sets[2];

bool bipartite(vector<int> *edges,int n){
        sets[0].clear();
        sets[1].clear();
        vector<int> pending;
        sets[0].insert(0);
        pending.push_back(0);
        while(pending.size()>0){
            int curr=pending.back();
            pending.pop_back();
            int cs= sets[0].count(curr)>0?0:1;
            if(cs==0){
                    for(int i=0;i<edges[curr].size();i++){
                    int nbr=edges[curr][i];
                    sets[1].insert(nbr);
                    pending.push_back(nbr);
            }
            else{
                for(int i=0;i<edges[curr].size();i++){
                    int nbr=edges[curr][i];
                    if(sets[0].count(nbr)==0 && sets[1].count(nbr)==0){
                        sets[0].insert(nbr);
                    }
                    else{
                        sets[1].insert(nbr);
                    }
                    
                    pending.push_back(nbr);

            }
            }
            
        }
        return true;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> *edges=new vector<int>[n];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edges[x-1].push_back(y-1);
            edges[y-1].push_back(x-1);
        }
        if(bipartite(edges,n)){
              //count
              int ans=1;
              cout<<ans<<endl;
               string ss="";
                for(int i=0;i<n;i++){
                    if(sets[0].count(i)>0){
                        ss+='1';
                    }
                    else{
                        ss+='0';
                    }
                }
            cout<<ss<<endl;
        }
        else{
            cout<<0<<endl;
            string ss="";
            for(int i=0;i<n;i++){
                ss+='0';
            }
            cout<<ss<<endl;
        }
    }
    return 0;
}