#include <iostream>

using namespace std;

int lcm(int, int);
int gcd(int, int);

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int lcm_num = b * d / lcm(b, d);
    int top = (lcm_num/b*a) + (lcm_num/d*c);

    
    int gcd_num = gcd(top, lcm_num);
    if (gcd_num != 1){
        cout << top / gcd_num << ' ' << lcm_num / gcd_num << '\n';
    }
    else {
        cout << top << ' ' << lcm_num << '\n';
    }

    return 0;
}

int lcm(int a, int b){
    while (b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    int temp = a%b;
    a = b;
    b = temp;

    return gcd(a, b);
}