#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int temp[10];
int num[10];
int cnt[10];
int a[10];
void go(int length, int start)
{
    if (length == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << num[a[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = start; i < n; i++)
    {
        if (cnt[i] > 0)
        {
            a[length] = i;
            cnt[i]--;
            go(length + 1, i);
            cnt[i]++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    sort(temp, temp + n);

    int x = temp[0];
    int k = 1;
    num[0] = temp[0];
    cnt[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (x == temp[i])
        {
            k--;
            cnt[k] += 1;
            k++;
        }
        else
        {
            x = temp[i];
            num[k] = temp[i];
            cnt[k] += 1;
            k += 1;
        }
    }
    go(0, 0);
    return 0;
}