#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<Edge> graph[1001];
bool isvisited[1001];
int dist[1001];
class Edge
{
private:
    int to;
    int cost;

public:
    Edge(int to, int cost)
    {
        this->to = to;
        this->cost = cost;
    }
    int getTo()
    {
        return to;
    }
    int getCost()
    {
        return cost;
    }
};
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    isvisited[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            Edge &e = graph[x][i];
            if (isvisited[e.getTo()] == false)
            {
                isvisited[e.getTo()] = true;
                q.push(e.getTo());
                dist[e.getTo()] = dist[x] + e.getCost();
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
    for (int i = 0; i < n - 1; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back(Edge(y, z));
    }
    bfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << '\n';
    }
    return 0;
}