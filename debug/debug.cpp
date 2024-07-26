#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int t[15];
int p[15];
int ans = 0;
int num = 0;
int go(int index, int ps)
{
    cout << "go(index,ps)호출: " << index << ' ' << ps << '\n';
    if (index + t[index] > n)
    {
        cout << "ps값: " << ps - p[index] << '\n';
        return ps - p[index];
    }
    if (index + t[index] == n)
    {
        cout << "ps값: " << ps << '\n';
        return ps;
    }

    for (int i = index + t[index]; i < n; i++)
    {
        if (index + t[index] > n)
        {
            continue;
        }
        int val = go(index + t[index], ps + p[index + t[index]]);
        // cout << "i =  " << i << ' ' << "val 값: " << val << '\n';
        ans = max(ans, val);
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i + t[i] > n)
        {
            continue;
        }
        cout << "go(i,p[i]) 호출: " << i << '\n'
             << '\n';
        num = max(go(i, p[i]), num);
        // cout << "i = : " << i << "값: " << num << '\n';
    }
    // cout << num << '\n';
    return 0;
}