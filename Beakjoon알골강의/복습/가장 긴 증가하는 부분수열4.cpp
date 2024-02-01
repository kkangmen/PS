#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int d[1001];
int v[1001];

void go(int);

int main(){
    int p = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        d[i] = 1;
        v[i] = -1;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j] && d[i] < d[j] + 1){
                d[i] = d[j] + 1;
                v[i] = j;
            }
        }
    }

    int max = d[0];
    for (int i = 1; i < n; i++){
        if (max < d[i]){
            max = d[i];
            p = i;
        }
    }

    cout << max << '\n';
    go(p);
    return 0;
}

void go(int p){
    if (p == -1){
        return ;
    }

    go(v[p]);
    cout << a[p] << ' ';
}