#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool decimal[1000001];


    for (int i = 2; i*i <= 1000001; i++){
        if (decimal[i] == false)
        for (int j = i+i; j <= 1000001; j+=i){
                decimal[j] = true;
        }
    }

    while (1){
        int n;
        cin >> n;

    

        if (n == 0){
            break;
        }
        else {
            int result = 0;
            for (int i = 3; i < 1000001; i++){
                if (decimal[i] == false && decimal[n-i] == false){
                    cout << n << " = " << i << " + " << n - i << '\n';
                    result++;
                    break;
                }
            }
            if (result == 0){
                cout << "Goldbach's conjecture is wrong." << '\n';
            }
        }
    }
    return 0;
}
