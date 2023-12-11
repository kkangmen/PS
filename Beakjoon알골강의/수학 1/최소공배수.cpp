#include <iostream>

using namespace std;

int lcm(int, int);
int gcd(int, int);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int a , b;
    cin >> t;

    while (t--){
        cin >> a >> b;

        cout << lcm(a,b) << endl;
    }
    return 0;
}

int lcm(int a, int b){
    int gcd_value = 1;
    int result = 0;

    gcd_value = gcd(a, b);

    result = a * b / gcd_value;

    return result;
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