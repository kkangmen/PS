#include <iostream>
using namespace std;

int big(int a, int b, int c = 100){
    int m = (a>b)?a:b;
    if (m < c){
        return m;
    }
    else {
        return c;
    }
}
int main(){
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << "x= " << x << ' ' << "y= " << y << ' ' << "z= " << z << '\n';
    return 0;
}