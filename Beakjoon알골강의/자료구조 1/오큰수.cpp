#include <iostream>
#include <stack>

using namespace std;

int A[1000001];

int main(){
    stack<int> stack;
    int n;

    cin >> n;

    for (int i = 1; i < n+1; i++){
        cin >> A[i];
    }

    for (int i = 1; i < n+1; i++){
        stack.push(A[i]);
        
    }
    
    return 0;
}