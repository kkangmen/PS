#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int num;
        string op;
        if (i == n-1){
            cin >> num;
        }
        else {
            cin >> num >> op;
        }
    }

    
    return 0;
}