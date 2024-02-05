#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int num;
    int max_sum = 0;

    cin >> n;

    int A[n] = {0, };
    int D[n] = {0, };

    for (int i = 0; i < n; i++){
        cin >> num;
        A[i] = num;
    }

    for (int i = 0; i < n; i++){
        D[i] = A[i];
        for (int j = 0; j < i; j++){
            if (A[j] < A[i] && D[i] < D[j] + A[i]){
                D[i] = D[j] + A[i];
            }
        }
    }

    for (int i = 0; i < n; i++){
        max_sum = max(max_sum, D[i]);
    }

    cout << max_sum << '\n';
    return 0;
}