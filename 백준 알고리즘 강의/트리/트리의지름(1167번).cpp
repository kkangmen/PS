#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
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

vector<Edge> v[100001];
int dist[100001];
bool isvisited[100001];
void bfs(int x)
{
    memset(dist, 0, sizeof(dist));
    memset(isvisited, false, sizeof(isvisited));
    queue<int> q;
    q.push(x);
    isvisited[x] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < v[x].size(); i++)
        {
            Edge &e = v[x][i];
            if (isvisited[e.to] == false)
            {
                isvisited[e.to] = true;
                q.push(e.to);
                dist[e.to] = dist[x] + e.cost;
            }
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (true)
        {
            int y, z;
            cin >> y;
            if (y == -1)
            {
                break;
            }
            cin >> z;

            v[x].push_back(Edge(y, z));
        }
    }
    bfs(1);
    int start = 1;
    for (int i = 2; i <= n; i++)
    {
        if (dist[i] > dist[start])
        {
            start = i;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dist[i] << ' ';
    // }
    bfs(start);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dist[i] << ' ';
    // }
    cout << *max_element(dist, dist + n) << '\n';
    return 0;
}