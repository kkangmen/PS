#include <iostream>

using namespace std;


int main(){
    string word;
    char a[5][16];
    
    for (int i = 0; i < 5; i++){
        cin >> word;

        for (int j = 0; j < word.size(); j++){
            a[i][j] = word[j];
        }
    }

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 5; j++){
            if (a[j][i] != NULL){
                cout << a[j][i];
            }
        }
    }

    cout << '\n';
    return 0;
}