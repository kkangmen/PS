#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    cin >> m;
    int s = 0;
    while (m--)
    {
        string order;
        cin >> order;
        int x;
        if (order == "add")
        {
            cin >> x;
            s = s | (1 << x);
        }
        else if (order == "remove")
        {
            cin >> x;
            s = s & ~(1 << x);
        }
        else if (order == "check")
        {
            cin >> x;
            if (s & (1 << x))
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (order == "toggle")
        {
            cin >> x;
            s = s ^ (1 << x);
        }
        else if (order == "all")
        {
            s = (1 >> 21) - 1;
        }
        else if (order == "empty")
        {
            s = 0;
        }
    }
    return 0;
}
