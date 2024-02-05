#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; 
    int max_num = 0;
    int num;

    cin >> n;

    int A[n] = {0, };
    int D[n] = {0, };

    for (int i = 0; i < n; i++){
        cin >> num;
        A[i] = num;
    }

    for (int i = 0; i < n; i++){
        D[i] = 1;
        for (int j = 0; j < i; j++){
            if (A[j] > A[i] && D[i] < D[j] + 1){
                D[i] = D[j] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++){
        max_num = max(max_num, D[i]);
    }

    cout << max_num << '\n';
    return 0;
}