#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
int n, m;

void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
        {
            dfs(y);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}