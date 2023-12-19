#include <iostream>

using namespace std;

int A[1000] = {0, };
int D[1000] = {0, };
int V[1000] = {0, };

void go(int);

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n; i++){
        D[i] = 1;
        V[i] = -1;
        for (int j = 0; j < i; j++){
            if (A[j] < A[i] && D[i] < D[j] + 1){
                D[i] = D[j] + 1;
                V[i] = j;
            }
        }
    }

    int ans = D[0];
    int p = 0;
    for (int i = 1; i < n; i++){
        if (ans < D[i]){
            ans = D[i];
            p = i;
        }
    }

    cout << ans << '\n';
    go(p);

    return 0;
}

void go(int p){
    if (p == -1){
        return ;
    }

    go(V[p]);
    cout << A[p] << ' ';
}