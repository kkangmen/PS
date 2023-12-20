#include <iostream>

using namespace std;

//int A[100000] = {0, };
//int D[100000] = {0, }; 

int main(){
    int n;
    cin >> n;

    int A[n] = {0, };
    int D[n] = {0, };
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    D[0] = A[0];
    for (int i = 1; i < n; i++){
        D[i] = A[i];
        if (D[i-1] + A[i]> A[i]){
            D[i] = D[i-1] + A[i];
        }
    }

    int max = D[0];

    for (int i = 1; i < n; i++){
        if (max < D[i]){
            max = D[i];
        }
    }

    cout << max << '\n';
    return 0;
}