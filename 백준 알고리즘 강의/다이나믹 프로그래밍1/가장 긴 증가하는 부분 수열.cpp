#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> d(1000);
vector<int> arr(1000);

int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        d[i] = 1;
        for (int j = 0; j < i; j++){
            if (arr[j] < arr[i] && d[i] < d[j] + 1){
                d[i] = d[j] + 1;
            }
        }
    }

    cout << *max_element(d.begin(), d.end()) << '\n';
    return 0;
}