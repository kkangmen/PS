#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m;
char graph[50][50];
int val[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
bool visited[50][50];

bool dfs(int x, int y, char color, int cnt)
{
    cout << "x= " << x << " y= " << y << ' ' << cnt << '\n';
    if (visited[x][y])
    {
        return cnt - val[x][y] >= 4;
    }
    visited[x][y] = true;
    val[x][y] = cnt;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx <= n && 0 <= ny && ny <= m)
        {
            if (color == graph[nx][ny])
            {
                if (dfs(nx, ny, color, cnt + 1))
                {
                    cout << "Âü" << '\n';
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            graph[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "i" << i << " j" << j << '\n';
            if (dfs(i, j, graph[i][j], 0))
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }

    cout << "No" << '\n';
    return 0;
}