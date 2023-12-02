#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    int cnt = 1;
    stack<int> stack;
    vector<char> v;
    bool valid = true;

    cin >> n;

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;

        while (cnt <= num){
            stack.push(cnt);
            cnt++;
            v.push_back('+');
        }

        if (stack.top() == num){
            v.push_back('-');
            stack.pop();
        }
        else {
            valid = false;
        }
    }

    if (valid == false){
        cout << "NO" << '\n';
    }
    else{
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << '\n';
        }
    }

    

    return 0;
}