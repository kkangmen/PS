#include <iostream>
#include <string>
#include <vector>
using namespace std;

int graph[50][50];
int w, h;

void dfs(int x, int y)
{
    if (x < 0 || x >= h || y < 0 || y >= w)
    {
        return;
    }
    graph[x][y] = 0;

    if (graph[x + 1][y] == 1)
    {
        dfs(x + 1, y);
    }
    if (graph[x - 1][y] == 1)
    {
        dfs(x - 1, y);
    }
    if (graph[x][y + 1] == 1)
    {
        dfs(x, y + 1);
    }
    if (graph[x][y - 1] == 1)
    {
        dfs(x, y - 1);
    }
    if (graph[x + 1][y + 1] == 1)
    {
        dfs(x + 1, y + 1);
    }
    if (graph[x - 1][y + 1] == 1)
    {
        dfs(x - 1, y + 1);
    }
    if (graph[x + 1][y - 1] == 1)
    {
        dfs(x + 1, y - 1);
    }
    if (graph[x - 1][y - 1] == 1)
    {
        dfs(x - 1, y - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1)
    {
        cin >> w >> h;
        if (w == 0 && h == 0)
        {
            return 0;
        }

        int cnt = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> graph[i][j];
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (graph[i][j])
                {
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}