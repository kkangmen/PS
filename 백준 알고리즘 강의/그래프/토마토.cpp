#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int graph[1000][1000];
int d[1000][1000];
int m, n;
queue<pair<int, int>> q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m){
                if (graph[nx][ny] == 0 && d[nx][ny] == -1){
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = d[x][y] + 1;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            d[i][j] = -1;
            if (graph[i][j] == 1)
            {
                q.push(make_pair(i, j));
                d[i][j] = 0;
            }
        }
    }

    bfs();

    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (ans < d[i][j]){
                ans = d[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (graph[i][j] == 0 && d[i][j] == -1){
                ans = -1;
            }
        }
    }

    cout << ans << '\n';
    return 0;
    
}