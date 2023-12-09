#include <iostream>

using namespace std;
 
int main(){

    int k[1000000];
    int n;

    cin >> n;

    k[1] = 0;
    for (int i = 2; i <= n; i++){
        k[i] = k[i-1] + 1;
        if (i % 2 == 0 && k[i] > k[i/2] + 1){
            k[i] = k[i/2] + 1;
        }
        if (i % 3 == 0 && k[i] > k[i/3] + 1){
            k[i] = k[i/3] + 1;
        }
    }

    cout << k[n] << endl;
    
    return 0;
}

