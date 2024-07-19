#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m;
int a[10];

void go(int cnt){
    if (cnt == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++){
        a[cnt] = i;
        go(cnt+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    go(0);
    return 0;
}
