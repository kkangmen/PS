#include <iostream>

using namespace std;

int put_num(int i);
int check_num(int arr[]);
int main(){
    int N;
    cin >> N;
    int count = 0;

    for (int i = 1; i <= N; i++){
        if(i < 100){
            count++;
        }
        else if (i == 1000){}
        else{
           if (put_num(i) == 1){
            count++;
           }
        }
    }
    cout << count << endl;
  
    return 0;
}

int put_num(int i){
    int arr[3] = {};
    for (int j = 0; j < 3; j++){
        if (i != 0){
            arr[j] = i%10;
            i /= 10;
        }
    }

    int result = check_num(arr);
    return result;
}

int check_num(int arr[]){
    if (arr[2] - arr[1] == arr[1] - arr[0]){
        return 1;
    }
    else{
        return 0;
    }
}
