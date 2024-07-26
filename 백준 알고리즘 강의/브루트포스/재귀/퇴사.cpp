#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int t[16];
int p[16];
int ans = 0;
void go(int day, int ps)
{
    if (day > n + 1)
    {
        return;
    }

    if (day == n + 1)
    {
        if (ans < ps)
        {
            ans = ps;
        }
        return;
    }

    go(day + t[day], ps + p[day]);
    go(day + 1, ps);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }

    go(1, 0);
    cout << ans << '\n';
    return 0;
}