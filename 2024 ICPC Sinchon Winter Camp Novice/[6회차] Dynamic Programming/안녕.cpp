#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int d[21][101];
int L[21];
int J[21];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> L[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> J[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 100; j++){
            if (j - L[i] > 0){
                d[i][j] = max(d[i-1][j], d[i-1][j-L[i]] + J[i]);
            }
            else {
                d[i][j] = d[i-1][j];
            }
        }
    }

    cout << d[n][100] << '\n';
    return 0;
}