#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m;
string graph[51][51];
bool isvisited[51][51];
int dist[51][51];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int cnt)
{
    if (cnt - dist[x][y] >= 4)
    {
    }
    isvisited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (1 <= nx && nx <= m && 1 <= ny && ny <= m)
        {
            if (graph[x][y] == graph[nx][ny])
            {
                dist[nx][ny] = dist[x][y] + 1;
                dfs(nx, ny, ++cnt);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            graph[i][j + 1] = s[j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dfs(i, j, 0);
        }
    }
    return 0;
}