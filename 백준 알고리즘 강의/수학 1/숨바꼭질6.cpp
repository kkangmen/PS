#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int, int);

int main(){
    int n, s;

    cin >> n >> s;

    int bro[n];
    int distance[n];
    int gcd_arr[n-1];

    for (int i = 0; i < n; i++){
        cin >> bro[i];
        
        if (s > bro[i]){
            distance[i] = s - bro[i];
        }
        else {
            distance[i] = bro[i] - s;
        }
    }

    for (int i = 0; i < n; i++){
        gcd_arr[i] = gcd(distance[i], distance[i+1]);
    }

    long long int ans = gcd_arr[0];
    for (int i = 1; i < n-1; i++){
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
    int r = a%b;
    a = b;
    b = r;

    return gcd(a, b);
}