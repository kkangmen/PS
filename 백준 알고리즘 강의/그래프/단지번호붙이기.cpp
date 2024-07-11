#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int graph[25][25];
int map[25][25];
int n;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int houses[1001];
void bfs(int x, int y, int cnt)
{
    graph[x][y] = 0;
    map[x][y] = cnt;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    houses[cnt] += 1;
    // v[--cnt]++;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && graph[nx][ny]==1)
            {
                graph[nx][ny] = 0;
                q.push(make_pair(nx, ny));
                map[nx][ny] = cnt;
                houses[cnt] += 1;
                // v[--cnt]++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            graph[i][j] = str[j] - '0';
        }
    }

    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j])
            {
                bfs(i, j, cnt);
                cnt++;
            }
        }
    }

    cout << --cnt << '\n';
    sort(houses + 1, houses + (cnt + 1));
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << '\n';
    // }
    for (int i = 1; i <= cnt; i++)
    {
        cout << houses[i] << '\n';
    }
    return 0;
}