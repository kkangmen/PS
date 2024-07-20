#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
bool isused[10];
int num[10];
int a[10];

void go(int len)
{
    if (len == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++){
        if (isused[i] == false){
            a[len] = num[i];
            isused[i] = true;
            go(len+1);
            isused[i] = false;
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
        cin >> num[i];
    }
    sort(num, num+n);
    go(0);
    return 0;
}