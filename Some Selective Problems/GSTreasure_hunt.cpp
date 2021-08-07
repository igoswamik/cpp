#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x;
    int y;
};

class PQentry
{
public:
    int no_of_demons_killed;
    Point p;

    bool operator<(const PQentry &t) const
    {
        return no_of_demons_killed > t.no_of_demons_killed;
    }
};

Point NextPoint(Point p, int n, int m)
{
    if (p.x == 0 && p.y < m - 1)
    {
        p.y++;
        return p;
    }
    else if (p.y == m - 1 && p.x < n - 1)
    {
        p.x++;
        return p;
    }
    else if (p.x == n - 1 && p.y > 0)
    {
        p.y--;
        return p;
    }
    else if (p.y == 0 && p.x > 0)
    {
        p.x--;
        return p;
    }
    else
    {
        return Point{-1, -1};
    }
}

int giveMin(vector<vector<int>> &DisA, vector<vector<int>> &DisB, vector<vector<int>> &Dis, vector<string> &Arena)
{
    int n = DisA.size();
    int m = Dis[0].size();
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (DisA[i][j] == -1)
                continue;
            int total = DisA[i][j] + DisB[i][j] + Dis[i][j];
            if (Arena[i][j] == 'X')
                total -= 2;

            minimum = min(minimum, total);
        }
    }

    return minimum;
}

vector<Point> Next(Point cur, vector<string> &Arena)
{
    int n = Arena.size();
    int m = Arena[0].size();

    vector<int> dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
    vector<Point> ans;

    for (int i = 0; i < 4; i++)
    {
        int nextx = cur.x + dx[i];
        int nexty = cur.y + dy[i];

        if (nextx >= 0 && nextx < n && nexty >= 0 && nexty < m && Arena[nextx][nexty] != '1')
        {
            ans.push_back(Point{nextx, nexty});
        }
    }

    return ans;
}

void Dijkastra(Point start, vector<string> &Arena, vector<vector<int>> &Distance)
{
    priority_queue<PQentry> PQ;
    PQentry fentry;
    fentry.p = start;
    if (Arena[start.x][start.y] == 'X')
    {
        fentry.no_of_demons_killed = 1;
    }
    else
    {
        fentry.no_of_demons_killed = 0;
    }
    PQ.push(fentry);
    Distance[start.x][start.y] = fentry.no_of_demons_killed;
    while (!PQ.empty())
    {
        PQentry t = PQ.top();
        PQ.pop();
        Point p = t.p;
        int Dis = t.no_of_demons_killed;
        if (Distance[p.x][p.y] < Dis && Distance[p.x][p.y] != -1)
            continue;
        vector<Point> next = Next(p, Arena);

        for (auto X : next)
        {
            int new_dis = Dis + (Arena[X.x][X.y] == 'X');

            if (new_dis < Distance[X.x][X.y] || Distance[X.x][X.y] == -1)
            {
                Distance[X.x][X.y] = new_dis;
                PQentry entry;
                entry.no_of_demons_killed = new_dis;
                entry.p = X;
                PQ.push(entry);
            }
        }
    }
}

void Print(vector<vector<int>> V, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (V[i][j] == -1)
                cout << "X ";
            else
                cout << V[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    //freopen("input.txt","r",stdin);

    int n, m, x, y;
    cin >> n >> m;
    vector<string> Arena(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arena[i];
    }
    Point A, B;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Arena[i][j] == 'A')
                A = {i, j};
            if (Arena[i][j] == 'B')
                B = {i, j};
        }
    }

    vector<vector<int>> DisA(n, vector<int>(m, -1));
    vector<vector<int>> DisB(n, vector<int>(m, -1));

    Dijkastra(A, Arena, DisA);
    Dijkastra(B, Arena, DisB);

    cout << "DisA\n";
    Print(DisA, n, m);
    cout << "DisB\n";
    Print(DisB, n, m);

    Point start = {0, 0};
    vector<vector<int>> Dis(n, vector<int>(m, -1));
    int minimum = INT_MAX;

    if (Arena[start.x][start.y] != '1')
    {
        Dijkastra(start, Arena, Dis);
        cout << "Dis from " << start.x << ", " << start.y << "\n";
        Print(Dis, n, m);
        int temp = giveMin(DisA, DisB, Dis, Arena);
        minimum = min(minimum, temp);
    }

    for (Point P = NextPoint(start, n, m); !(P.x == start.x && P.y == start.y); P = NextPoint(P, n, m))
    {
        cout << "Point " << P.x << ' ' << P.y << "\n";
        if (Arena[P.x][P.y] != '1')
        {
            fill(Dis.begin(), Dis.end(), vector<int>(m, -1));
            Dijkastra(P, Arena, Dis);
            cout << "Dis from " << P.x << ", " << P.y << "\n";
            Print(Dis, n, m);
            int temp = giveMin(DisA, DisB, Dis, Arena);
            minimum = min(minimum, temp);
        }
    }

    cout << "\n"
         << minimum << "\n";

    return 0;
}