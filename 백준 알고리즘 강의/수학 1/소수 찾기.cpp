#include <iostream>

using namespace std;

int findecimal (int);

int main(){
    int n;
    int cnt = 0;

    cin >> n;

    while (n--){
        int a;
        cin >> a;

        if (findecimal(a) == 0){
            cnt++;
        }
        
    }
    cout << cnt << endl;
    return 0;
}

int findecimal(int a){
    int def = 0;
    if (a == 1){
        return 1;
    }

    else{
        for (int i = 2; i < a; i++){
            if (a % i == 0){
                def = 1;
            }
        }
        return def;
    }
}