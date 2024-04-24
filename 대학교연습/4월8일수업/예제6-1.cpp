#include <iostream>
using namespace std;

int big(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int big(int array[], int size){
    int ans = array[0];
    for (int i = 1; i < size; i++){
        if (ans < array[i]){
            ans = array[i];
        }
    }
    return ans;
}
int main(){
    int array[5] = {1,9,-2,8,6};
    cout << big(2,3) << '\n';
    cout << big(array, 5) <<'\n';    
}