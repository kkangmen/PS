#include <iostream>
using namespace std;

template <class T1, class T2>
bool search(T1 find, T2 arr[], int size){
    for (int i = 0; i < size; i++){
        if (find == arr[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    if (search(100, x, sizeof(x)/4)){
        cout << "100이 배열 x에 포함되어 있다.";
    }
    else{
        cout << "100이 배열 x에 포함되어 있지 않다.";
    }
    cout << '\n';

    char c[] = {'h', 'e', 'l', 'l', 'o'};
    if (search('e', c, 5)){
        cout << "e가 배열 c에 포함되어 있다.";
    }
    else{
        cout << "e가 배열 c에 포함되어 있지 않다.";
    }
    cout << '\n';
}