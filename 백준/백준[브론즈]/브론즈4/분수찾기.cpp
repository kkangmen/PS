#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    
    int k = 1;
    int wv = 1;
    while (x > k){
        wv++;
        k += wv;
    }
    //cout << wv << '\n';

    if (wv%2 == 0){
        int son = wv;
        int mom = 1;
        while(k != x){
            son--;
            mom++;
            k--;
        }
        cout << son << '/' << mom << '\n';
    }
    else{
        int son = 1;
        int mom = wv;
        while(k != x){
            son++;
            mom--;
            k--;
        }
        cout << son << '/' << mom << '\n';
    }

    return 0;
}