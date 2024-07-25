#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ans = 0;
void go(int num, int cs)
{
    if (num == cs)
    {
        ans++;
        return;
    }

    if (num < cs)
    {
        return;
    }
    go(num, cs + 1);
    go(num, cs + 2);
    go(num, cs + 3);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ts;
    cin >> ts;
    while (ts--)
    {
        int n;
        cin >> n;

        ans = 0;
        go(n, 0);
        cout << ans << '\n';
    }

    return 0;
}