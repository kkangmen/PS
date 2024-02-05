#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    int num;
    int cnt = 1;
    int result = 0;

    vector <int> v;
    stack <int> stack;

    cin >> n;

    while (n--){
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++){
        if (cnt == v[i]){

            cnt++;
        }
        else {
            while (!stack.empty() && stack.top() == cnt){
                stack.pop();
                cnt++;
            }
            if (stack.empty()){
                stack.push(v[i]);
            }
            else {
                if (stack.top() == cnt){
                    stack.pop();
                    cnt++;
                }
                if (stack.top() < v[i]){
                    result++;
                    break;
                }
                else {
                    stack.push(v[i]);
                }
            }
        }
    }

    if (result == 0){
        cout << "Nice" << '\n';
    }
    else {
        cout << "Sad" << '\n';
    }
    return 0;
}