#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a);


int main(){
    vector<int> a(5); 

    for (int i = 0; i < 5; i++){
        cin >> a[i];
    }

    cout << sum(a) << endl;

    return 0;
}

long long sum(vector<int> &a){
    int a_size = a.size();
    long long ans = 0;
    for (int i = 0; i < a_size; i++){
        ans += a[i];
    }

    return ans;
}