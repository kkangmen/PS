#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> node[100001];
bool isvisted[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v;
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int to;
        cin >> to;
        while (true)
        {
            int from, depth;
            cin >> from;
            if (from == -1)
            {
                break;
            }
            cin >> depth;
        }
    }
    return 0;
}