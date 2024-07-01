#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string num1, num2, numans;
    cin >> num1 >> num2;

    // 10 1000
    // 90 9999
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    // 01 0001
    // 09 9999
    if(num1.length() < num2.length()){
        int addzero = num2.length() - num1.length();
        for (int i = 0; i < addzero; i++){
            num1 += '0';
        }
    }
    // 0100 0001
    // 0900 9999
    if (num1.length() > num2.length()){
        int addzero = num1.length() - num2.length();
        for (int i = 0; i < addzero; i++){
            num2 += '0';
        }
    }
    int carry = 0;
    for (int i = 0; i < num1.length(); i++){
        if ((num1[i]-48) + (num2[i]-48) + carry < 10){
            numans += to_string((num1[i]-48) + (num2[i]-48) + carry);
            carry = 0;
        }
        else {
            numans += to_string(((num1[i]-48) + (num2[i]-48) + carry)%10);
            carry = 1;
        }
    }
    if (carry == 1){
        numans += '1';
    }

    reverse(numans.begin(), numans.end());
    cout << numans << '\n';
    return 0;
}