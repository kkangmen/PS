#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
using namespace std;

int graph[101][101];
int d[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int m, n;

void bfs()
{
    deque<pair<int, int>> q;
    q.push_back(make_pair(1, 1));
    d[1][1] = 0;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop_front();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (1 <= nx && nx <= n && 1 <= ny && ny <= m)
            {
                if (d[nx][ny] == -1)
                {
                    if (graph[nx][ny] == 0)
                    {
                        q.push_front(make_pair(nx, ny));
                        d[nx][ny] = d[x][y];
                    }
                    else
                    {
                        q.push_back(make_pair(nx, ny));
                        d[nx][ny] = d[x][y] + 1;
                    }
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;
    string line;
    for (int i = 1; i <= n; i++)
    {
        cin >> line;
        for (int j = 0; j < line.length(); j++){
            graph[i][j+1] = line[j]-'0';
        }
    }

    memset(d, -1, sizeof(d));
    bfs();
    cout << d[n][m] << '\n';
    return 0;
}