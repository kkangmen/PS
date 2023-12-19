#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int num;
    int max_length = 1; 

    cin >> n;

    int A[n] = {0,};
    int D[n] = {0,};

    for (int i = 0; i < n; i++){
        cin >> num;
        A[i] = num;
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
        max_length = max(max_length, D[i]);
    }

    cout << max_length << '\n';
    return 0;
}