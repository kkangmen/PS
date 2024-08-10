#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v[2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 2; i++)
    {
        v[i].push_back(i);
    }

    v->clear();
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << '\n';
        }
    }
    return 0;
}