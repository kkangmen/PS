#include <iostream>
#include <list>
using namespace std;

int main(){
    int i = 0;
    list<int> MyList(5, 20);
    list<int>::iterator it;

    for (it = MyList.begin(); it != MyList.end(); ++it){
        *it = *it * (i+1);
        cout << ' ' << *it;
        i++;
    }

    cout << '\n';
    cout << MyList.front() << '\n';
    cout << *MyList.begin() << '\n';
    cout << MyList.back() << '\n';
    cout << *(--MyList.end()) << '\n';
}