#include <iostream>

using namespace std;

void d(int n);
int add_num(int n);
void get_num(bool PrimeArray[], int n);

int main(){
    
    d(10000);

    return 0;
}

void d(int n){

    bool* PrimeArray = new bool[n+1];

    for (int i = 1; i <= n; i++){
        PrimeArray[i] = true;
    }

    for (int i = 1; i <= n; i++){
        if (PrimeArray[i]){
            get_num(PrimeArray, i);
        }
    }

    for (int i = 1; i <= n; i++){
        if (PrimeArray[i]){
            cout << i << endl;
        }
    }
}

int add_num(int n){
    int sum = n;

    while (n != 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void get_num(bool PrimeArray[], int n){
    while (add_num(n) <= 10000){
        PrimeArray[add_num(n)] = false;
        n = add_num(n);
    }
}