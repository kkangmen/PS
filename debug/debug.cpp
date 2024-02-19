#include <iostream>
#define MOD 1234567891
using namespace std;

long long func(long long r, long long i){
	if (i == 0){
		return 1;
	}
    if (i == 1){
        return r % MOD;
    }

    long long temp = func(r, i/2);
    temp = (temp*temp) % MOD;
    if (i%2 == 0){
        return temp;
    }
    else {
        return temp*i;
    }
}
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	long long sum = 0;
	for (int i = 0; i < s.length(); i++){
		sum += ((s[i]-96)*func(31, i)) % MOD;
	}

	cout << sum << '\n';
	return 0;
}