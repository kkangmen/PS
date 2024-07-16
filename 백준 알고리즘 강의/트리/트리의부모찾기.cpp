#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> node[100001];
bool isvisited[100001];
int parent[100001];
void dfs(int x)
{
    isvisited[x] = true;
    for (int i = 0; i < node[x].size(); i++)
    {
        int y = node[x][i];
        if (isvisited[y] == false)
        {
            isvisited[y] = true;
            parent[y] = x;
            dfs(y);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v, e;
        cin >> v >> e;
        node[v].push_back(e);
        node[e].push_back(v);
    }
    dfs(1);

    for (int i = 2; i <= n; i++)
    {
        cout << parent[i] << '\n';
    }
    return 0;
}
