#include <iostream>

using namespace std;

bool check[1048577];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n, q;
	cin >> n >> q;

	while (q--){
		long long duck;
		cin >> duck;
		bool reached = false;
		long long temp = duck;
		long long ans = 0;
		while (temp != 1){
			if (!check[temp]){
				temp /= 2;
			}
			else {
				reached = true;
				ans = temp;
				temp /= 2;
			}
		}

		check[duck] = true;
		cout << ans << '\n';
	}


	return 0;
}