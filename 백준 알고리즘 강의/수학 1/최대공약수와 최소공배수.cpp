#include <iostream>

using namespace std;

int gcd(int , int);
int lwd(int, int, int);

int main(){
    int a, b;
    int gcd1;
    int lwd1;

    cin >> a >> b;

    gcd1 = gcd(a,b);
    lwd1 = lwd(gcd1, a, b);

    cout << gcd1 << endl;
    cout << lwd1 << endl;

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

int lwd(int gcd1, int a, int b){
    return a * b / gcd1;
}