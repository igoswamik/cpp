/***Problem C of Technocup 2021 Elimination Round 3 and Round #692 (Div. 2) ***/

/**C. Peaceful Rooks
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a n×n chessboard. Rows and columns of the board are numbered from 1 to n. Cell (x,y) lies on the intersection of column number x and row number y.

Rook is a chess piece, that can in one turn move any number of cells vertically or horizontally. There are m rooks (m<n) placed on the chessboard in such a way that no pair of rooks attack each other. I.e. there are no pair of rooks that share a row or a column.

In one turn you can move one of the rooks any number of cells vertically or horizontally. Additionally, it shouldn't be attacked by any other rook after movement. What is the minimum number of moves required to place all the rooks on the main diagonal?

The main diagonal of the chessboard is all the cells (i,i), where 1≤i≤n.

Input
The first line contains the number of test cases t (1≤t≤103). Description of the t test cases follows.

The first line of each test case contains two integers n and m — size of the chessboard and the number of rooks (2≤n≤105, 1≤m<n). Each of the next m lines contains two integers xi and yi — positions of rooks, i-th rook is placed in the cell (xi,yi) (1≤xi,yi≤n). It's guaranteed that no two rooks attack each other in the initial placement.

The sum of n over all test cases does not exceed 105.

Output
For each of t test cases print a single integer — the minimum number of moves required to place all the rooks on the main diagonal.

It can be proved that this is always possible.***/

/**1411C - Peaceful Rooks
Consider rooks as edges in a graph. The position (x,y) will correspond to an edge (x→y). From the condition that there're at most one edge exits leading from each vertex and at most one edge leading to each vertex, it follows that the graph decomposes into cycles, paths, and loops (edges of type v→v).

What happens to the graph when we move the rook? The edge changes exactly one of its endpoints. By such operations, we must turn all edges into loops, and the constraint on the number of edges going in and out of a vertex must be satisfied. A path is quite easy to turn into loops, just start from one end. A cycle must first be turned into a path, which is always possible. We've only spent one extra move, it's not hard to see that this is optimal.

The answer is the number of rooks minus the number of loops plus the number of cycles.**/
#include<bits/stdc++.h>
using namespace std;
 
#define N 100010
 
int t, n, m, a[N], b[N];
bool vis[N];
 
int main() {
    for(scanf("%d", &t); t --; ) {
        scanf("%d%d", &n, &m);
        for(int i = 1; i <= n; i ++) vis[i] = 0, a[i] = 0, b[i] = 0;
        while(m --) {
            int x, y;
            scanf("%d%d", &x, &y);
            a[x] = y;
            b[y] = x;
        }
        int ans = 0;
        for(int i = 1; i <= n; i ++) if(!vis[i] && a[i]) {
            if(a[i] == i) {
                vis[i] = 1;
                continue;
            }
            vis[i] = 1;
            int cnt = 1;
            int r = a[i];
            while(!vis[r] && a[r]) vis[r] = 1, r = a[r], cnt ++;
            if(!a[r]) ans += cnt;
            else if(r == i) ans += cnt + 1;
            else ans += cnt;
        }
        printf("%d\n", ans);
    }
}