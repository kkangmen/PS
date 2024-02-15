#include <iostream>

using namespace std;

long long recursion(long long a, long long b, long long c){
    if (b == 1){
        return a % c;
    }

    long long temp = recursion(a, b/2, c);
    temp = (temp*temp) % c;
    if (b%2 == 0){
        return temp;
    }
    else {
        return temp*a%c;
    }
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    cout << recursion(a, b, c) << '\n';
    return 0;
}