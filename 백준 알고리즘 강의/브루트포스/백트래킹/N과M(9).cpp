#include <iostream>
#include <string>
#include <vector>
#define MAX 100000000
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int a[10];
bool isused[10];
int find_num[MAX];

void go(int cnt){
    if (cnt == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++){
        if (isused[i] == false){
            isused[i] = true;
            a[cnt] = num[i];
            go(cnt+1);
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
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num, num+n);
    go(0);
    return 0;
}