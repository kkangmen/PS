#include <iostream>

using namespace std;

int main(){
    int n;
    int result = 0;
    
    cin >> n;

    for (int i = 1; i < n; i++){
        int sum = i;
        int num = i;

        while (num > 0){
            sum += num % 10;
            num = num / 10;
        }

        if (sum == n){
            cout << i << '\n';
            result++;
            break;
        }
    }

    if (result == 0){
        cout << 0 << '\n';
    }

    
    return 0;
}