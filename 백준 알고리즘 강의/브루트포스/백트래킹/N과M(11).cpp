#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int temp[10];
int num[10];
int a[10];
void go(int cnt){
    if (cnt == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return ;
    }
    for (int i = 0; i < n; i++){
        a[cnt] = num[i];
        go(cnt+1);
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
    num[0] = temp[0];
    int x = temp[0];
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (x == temp[i])
        {
            continue;
        }
        else
        {
            x = temp[i];
            num[k] = temp[i];
            k += 1;
        }
    }
    n = k;
    go(0);
    return 0;
}