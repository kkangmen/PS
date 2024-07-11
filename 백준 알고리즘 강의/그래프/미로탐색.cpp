#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int graph[101][101];
int val[101][101];
int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y, int cnt)
{
    graph[x][y] = 0;
    queue<pair<int, int>> q;
    val[x][y] = cnt;
    q.push(make_pair(x, y));
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && graph[nx][ny] == 1)
            {
                graph[nx][ny] = 0;
                q.push(make_pair(nx, ny));
                val[nx][ny] = val[x][y]+1;
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
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            graph[i][j] = str[j]-'0';
        }
    }

    bfs(0,0,1);
    cout << val[n-1][m-1] << '\n';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         cout << val[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    return 0;
}