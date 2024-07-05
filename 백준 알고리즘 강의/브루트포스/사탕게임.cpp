#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int check(vector<string> &v){
    int n = v.size();
    int max = 1;
    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = 1; j < n; j++){
            if (v[i][j] == v[i][j-1]){
                count++;
            }
            else{
                count = 1;
            }
            if (max < count){
                max = count;
            }
        }
        count = 1;
        for (int j = 1; j < n; j++){
            if (v[j][i] == v[j-1][i]){
                count++;
            }
            else{
                count = 1;
            }
            if (max < count){
                max = count;
            }
        }
    }
    return max;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int ans = 0;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j+1 < n){
                swap(v[i][j], v[i][j+1]);
                //int temp = check(v);
                if (ans < check(v)){
                    ans = check(v);
                }
                swap(v[i][j], v[i][j+1]);
            }
            if (i+1 < n){
                swap(v[i][j], v[i+1][j]);
                //int temp = check(v);
                if (ans < check(v)){
                    ans = check(v);
                }
                swap(v[i][j], v[i+1][j]);
            }
        }
    }

    cout << ans << '\n';
    return 0;
}