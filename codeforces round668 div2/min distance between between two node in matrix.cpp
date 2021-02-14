/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include<queue>
using namespace std;

class item{
    public:
    int row;
    int col;
    int dist;
    item(int x,int y,int z)
    {
        row=x;
        col=y;
        dist=z;
        
    }
};
int bfs(item source,int n,int m,char ** v,bool **visited)
{
    queue<item> q;
    q.push(source);
    while(!q.empty())
    {
        item front=q.front();
        q.pop();
        if(v[front.row][front.col]=='E')
        {
            return front.dist;
        }
        
        //move up
        if(front.row-1>=0 && visited[front.row-1][front.col]==false)
        {
            q.push(item(front.row-1,front.col,front.dist+1));
            visited[front.row-1][front.col]=true;
        }
        
        //move left
        if(front.col-1>=0 && visited[front.row][front.col-1]==false)
        {
            q.push(item(front.row,front.col-1,front.dist+1));
            visited[front.row][front.col-1]=true;
        }
        
        //move right
        if(front.col+1<m && visited[front.row][front.col+1]==false)
        {
            q.push(item(front.row,front.col+1,front.dist+1));
            visited[front.row][front.col+1]=true;
        }
        
        //move down
        if(front.row+1<n && visited[front.row+1][front.col]==false)
        {
            q.push(item(front.row+1,front.col,front.dist+1));
            visited[front.row+1][front.col]=true;
        }
    }
    return -1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    char** v=new char*[n];
    item source(0,0,0);
    bool **visited=new bool*[n];

    for(int i=0;i<n;i++)
    {
        v[i]=new char[m];
        visited[i]=new bool[m];
        for(int j=0;j<m;j++)
        {
            char s;
            cin>>s;
            v[i][j]=s;
            if(s=='p')
            {
                visited[i][j]=true;
            }
            else
            {
                visited[i][j]=false;
            }
            if(s=='R')
            {
                source.row=i;
                source.col=j;
                visited[i][j]=true;
            }
        }
    }
    cout<< bfs(source,n,m,v,visited);

    return 0;
}
