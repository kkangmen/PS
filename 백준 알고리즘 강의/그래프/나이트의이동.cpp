#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int graph[300][300];
int d[300][300];
int ts, l;
int sx, sy;
int ex, ey;
int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < l && 0 <= ny && ny < l)
            {
                if (d[nx][ny] == 0)
                {
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = d[x][y] + 1;
                }
            }
        }
    }
}
void reset()
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            d[i][j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ts;
    while (ts--)
    {
        cin >> l;
        cin >> sx >> sy;
        cin >> ex >> ey;

        if (sx == ex && sy == ey)
        {
            cout << 0 << '\n';
        }
        else
        {
            bfs(sx, sy);
            cout << d[ex][ey] << '\n';
        }
        reset();
    }

    // for (int i = 0; i < l; i++){
    //     for (int j = 0; j < l; j++){
    //         cout << d[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    return 0;
}