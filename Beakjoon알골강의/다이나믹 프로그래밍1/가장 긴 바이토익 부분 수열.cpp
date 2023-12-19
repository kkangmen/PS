#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int max_front = 1;
    int max_back = 1;
    int max_index = 0;

    cin >> n;

    int A[n] = {0, };
    int D[n] = {0, };

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n; i++){
        D[i] = 1;
        for (int j = 0; j < i; j++){
            if (A[j] < A[i] && D[i] < D[j] + 1){
                D[i] = D[j] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++){
        max_front = max(max_front, D[i]);
    }

    for (int i = 0; i < n; i++){
        if (max_front == D[i]){
            max_index = i;
        }
    }

    for (int i = max_index + 1; i < n; i++){
        D[i] = 1;
        for (int j = max_index + 1; j < i; j++){
            if (A[j] > A[i] && D[i] < D[j] + 1){
                D[i] = D[j] + 1;
            }
        }
    }

    for (int i = max_index + 1; i < n; i++){
        max_back = max(max_back, D[i]);
    }

    cout << max_front + max_back << '\n';

    return 0;
}