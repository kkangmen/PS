#include <iostream>
#define MAX 1000001

using namespace std;

int d[MAX];

int main(){
    int n;

    cin >> n;

    d[1] = 0;
    for (int i = 2; i <= n; i++){
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2]+1){
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3]+1){
            d[i] = d[i/3] + 1;
        }
       
    }

    // for (int i = 1; i <= n; i++){
    //     cout << d[i] << ' ';
    // }
    cout << d[n] << '\n';


    return 0;
}