#include <iostream>

using namespace std;

int gcd(int, int);

int main(){
    int n, s;
    cin >> n >> s;

    int arr[n] = {0, };
    int distance[n] = {0, };
    int gcd_arr[n-1] = {0, };
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        if (s - arr[i] < 0){
            distance[i] = arr[i] - s;
        }
        else{
            distance[i] = s - arr[i];
        }
    }

    for (int i = 0; i < n; i++){
        gcd_arr[i] = gcd(distance[i], distance[i+1]);
    }

    int ans = gcd_arr[0];
    for (int i = 0; i < n-1; i++){
        if (ans > gcd_arr[i]){
            ans = gcd_arr[i];
        }
    }

    cout << ans << '\n';
    return 0;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    int temp = a % b;
    a = b;
    b = temp;

    return gcd(a, b);
}