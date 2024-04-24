#include <iostream>
using namespace std;

int big(int a, int b){
    if (a < b){
        return b;
    }
    else {
        return a;
    }
}

int big(int a[], int size){
    int ans = a[0];
    for (int i = 1; i < size; i++){
        if (ans < a[i]){
            ans = a[i];
        }
    }

    return ans;
}
int main(){
    int array[5] = {1,9,-2,8,6};
    cout << big(2,3) << '\n';
    cout << big(array, 5) << '\n';
    return 0;
}