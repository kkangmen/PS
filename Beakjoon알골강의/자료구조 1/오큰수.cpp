#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    stack<int> stack;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    stack.push(0);
    for (int i = 1; i < n; i++){
        while (!stack.empty() && v[stack.top()] < v[i]){
            ans[stack.top()] = v[i];
            stack.pop();
        }
        stack.push(i);
    }

    while (!stack.empty()){
        ans[stack.top()] = -1;
        stack.pop();
    }
    for (int i : ans){
        cout << i << ' ';
    }
    return 0;
}