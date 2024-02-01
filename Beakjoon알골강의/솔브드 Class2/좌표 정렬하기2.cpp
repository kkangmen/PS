#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> v;

    while (n--){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}