#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m, r, c, d;
int graph[51][51];
int ans = 0;
vector<int> v;

void dfs(int x, int y, int dir)
{
    if (graph[x][y] == 0)
    {
        ans++;
    }

    if (dir == 0)
    {
        int nx = x + 0;
        int ny = y - 1;
        if (graph[nx][ny] == 0)
        {
            dfs(nx, ny, 3);
        }
    }
    if (dir == 1)
    {
        int nx = x - 1;
        int ny = y + 0;
        if (graph[nx][ny] == 0)
        {
            dfs(nx, ny, 3);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> r >> c >> d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    dfs(r, c, d);
    return 0;
}