#include <iostream>
using namespace std;

void star(int n = 5){
    for (int i = 0; i < n; i++){
        cout << '*';
    }
    cout << '\n';
}
void msg(int n, string s= ""){
    cout << n << ' ' << s << '\n';
}
int main(){
    star();
    star(10);

    msg(10);
    msg(10, "Hello");
    return 0;
}

