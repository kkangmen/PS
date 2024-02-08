#include <iostream>

using namespace std;

int l[21];
int j[21];
int d[21];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> l[i];
    }
    for (int i = 0; i < n; i++){
        cin >> j[i];
    }

    d[0] = j[0];
    int hp = l[0];
    for (int i = 1; i < n; i++){
        
        if (hp >= 100){
            d[i] = max(d[i], )
        }
    }
    return 0;
}