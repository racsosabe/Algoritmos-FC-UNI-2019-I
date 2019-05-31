#include<bits/stdc++.h>
using namespace::std;

const int MOD = 1000000000+7;

int main(){
	int n;
	int m;
	long x;
	int C = 0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x % m == 0) C += 1;	
	}
	int ans = 1;
	for(int i=0; i<C; i++){
		ans += ans;
		if(ans >= MOD){
			ans -= MOD;
		}
	}
	ans -= 1;
	if(ans < 0) ans += MOD;
	cout << ans << endl;
	return 0;
}
