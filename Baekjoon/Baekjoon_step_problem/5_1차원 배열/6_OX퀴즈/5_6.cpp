#include <iostream>
#include <string>

using namespace std;

int OX(string& s){

    int x = 0;
    int sum = 0;
    for (char &v : s){
        if (v == 'O'){
            x++;
            sum += x;
        }
        else{
            x = 0;
        }
    }
    return sum;
}

int main(){
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++){
        string s;
        cin >> s;
        
        cout << OX(s) << endl;
    }
    return 0;
}

