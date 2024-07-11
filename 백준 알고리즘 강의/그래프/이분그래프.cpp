#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> graph[20001];
int group[20001];
int tc;
int n, m, v, e;

void dfs(int x, int val)
{
    group[x] = val;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (group[y] == 0)
        {
            dfs(y, 3 - val);
        }
    }
}
void reset()
{
    for (int i = 1; i <= n; i++)
    {
        graph[i].clear();
        group[i] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;

        reset();
        for (int i = 0; i < m; i++)
        {
            cin >> v >> e;
            graph[v].push_back(e);
            graph[e].push_back(v);
        }

        for (int i = 1; i <= n; i++)
        {
            if (group[i] == 0)
            {
                dfs(i, 1);
            }
        }

        bool ans = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                int y = graph[i][j];
                if (group[i] == group[y])
                {
                    ans = false;
                }
            }
        }

        if (ans)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}