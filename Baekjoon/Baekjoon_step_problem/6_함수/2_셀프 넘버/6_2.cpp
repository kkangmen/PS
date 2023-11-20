#include <iostream>

using namespace std;

void d(int n);
int num(int n);

int main(){
    
    cout << num(100);

    return 0;
}

// void d(int n){

//     bool* PrimeArray = new bool[n+1];

//     for (int i = 1; i <= n; i++){
//         PrimeArray[i] = true;
//     }

//     for (int i = 1; i * i <= n; i++){
//         if (PrimeArray[i]){
//             for (int j = i * i; j <= n; j += i){
//                 PrimeArray[j] = false;
//             }
//         }
//     }

//     for (int i = 2; i <= n; i++){
//         if (PrimeArray[i]){
//             cout << i << endl;
//         }
//     }
// }

int num(int n){
    int sum = n;

    while (n%10 == 0){
        sum += n%10;
        n = n/10;
    }

    return sum;
}