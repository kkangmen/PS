#include <iostream>

using namespace std;

int main(){
    string sentence;
    int count = 0;

    getline(cin, sentence);

    for (char c : sentence){
        cout << c << " ";
    }
    cout << endl;
    for (char c : sentence){
        if (c == ' ' || c == '\n'){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}