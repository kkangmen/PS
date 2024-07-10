#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool isvisited[1001];
int n, m, v;

void dfs(int x)
{
    isvisited[x] = true;
    cout << x << ' ';
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!isvisited[y])
        {
            dfs(y);
        }
    }
}
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    isvisited[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        cout << x << ' ';
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!isvisited[y])
            {
                isvisited[y] = true;
                q.push(y);
            }
        }
    }
}
void reset()
{
    for (int i = 0; i < 1001; i++)
    {
        isvisited[i] = false;
    }
    cout << '\n';
}
void sort()
{
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int t, f;
        cin >> t >> f;
        graph[t].push_back(f);
        graph[f].push_back(t);
    }

    sort();
    dfs(v);
    reset();
    bfs(v);
    return 0;
}