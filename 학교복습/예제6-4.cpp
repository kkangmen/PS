#include <iostream>
using namespace std;

void f(char s = ' ', int n = 1){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 10; j++){
            cout << s;
        }
        cout << '\n';
    }
}
int main(){
    f();
    f('%');
    f('@',5);
    return 0;
}