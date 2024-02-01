#include <iostream>
#include <vector>
#define MOD 1000001
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> prime(MOD, true);

    for (int i = 2; i*i<= MOD; i++){
        if (prime[i]){
            for (int j = i+i; j <= MOD; j+=i){
                prime[j] = false;
            }
        }
    }

   
    while (1){
        int n;
        int result = 0;
        cin >> n;
        if (n == 0){
            return 0;
        }
        else{
            for (int i = 3; i <= n/2; i+= 2){
                if (prime[i] == true && prime[n-i] == true){
                    cout << n << " = " << i << " + " << n-i << '\n';
                    result++;
                    break;
                }
            }
        }
        if (result == 0){
        cout << "Goldbach's conjecture is wrong." << '\n';
    }
    }

    
    return 0;
}
