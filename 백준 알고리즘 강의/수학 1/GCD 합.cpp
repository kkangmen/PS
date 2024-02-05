#include <iostream>

using namespace std;

int gcd(int, int);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n;
    long long int sum = 0;

    cin >> t;

    while (t--){
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                sum += gcd(arr[i], arr[j]);
            }
        }

        
        cout << sum << '\n';
        sum = 0;
    }
    return 0;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    int r = a % b;
    a = b;
    b = r;

    return gcd(a, b);
}