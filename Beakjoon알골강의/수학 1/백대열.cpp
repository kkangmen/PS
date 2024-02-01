#include <iostream>
#include <string>

using namespace std;

int gcd(int, int);

int main(){
    int n, m;
    string s;
    cin >> s;

    string num1;
    string num2;
    bool b = true;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == ':'){
            b = false;
            continue;
        }
        
        if (b){
            num1 += s[i];
        }
        else{
            num2 += s[i];
        }
    }
    n = stoi(num1);
    m = stoi(num2);

    cout << n/gcd(n, m) << ':' << m/gcd(n,m) << '\n';

    return 0;
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