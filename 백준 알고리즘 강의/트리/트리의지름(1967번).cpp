#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int to;
    int cost;
    Edge(int to, int cost)
    {
        this->to = to;
        this->cost = cost;
    }
};
vector<Edge> v[10001];
bool isvisited[10001];
int dist[10001];

void dfs(int x)
{
    isvisited[x] = true;
    for (int i = 0; i < v[x].size(); i++)
    {
        Edge &e = v[x][i];
        if (isvisited[e.to] == false)
        {
            isvisited[e.to] = true;
            dist[e.to] = dist[x] + e.cost;
            dfs(e.to);
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
        int x, y, z;
        cin >> x >> y >> z;
        v[x].push_back(Edge(y, z));
        v[y].push_back(Edge(x, z));
    }
    dfs(1);

    int start = 1;
    for (int i = 2; i <= n; i++)
    {
        if (dist[i] > dist[start])
        {
            start = i;
        }
    }
    memset(isvisited, false, sizeof(isvisited));
    memset(dist, 0, sizeof(dist));

    // cout << start << '\n';
    dfs(start);
    cout << *max_element(dist, dist + n + 1) << '\n';

    return 0;
}