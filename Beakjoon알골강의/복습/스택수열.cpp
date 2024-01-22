#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> stack;
    vector<char> v;
    int n;
    int result = 0;
    int cnt = 1;
    cin >> n;

    while (n--){
        int num;
        cin >> num;

        while (cnt <= num){
            stack.push(cnt);
            v.push_back('+');
            cnt++;
        }

        if (stack.top() == num){
            stack.pop();
            v.push_back('-');
        }
        else{
            result++;
        }
    }

    if (result > 0){
        cout << "NO" << '\n';
    }
    else{
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << '\n';
        }
    }
    return 0;
}