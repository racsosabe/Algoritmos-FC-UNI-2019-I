#include<bits/stdc++.h>
using namespace::std;

int main(){
	int n;
	long x;
	long ans = 0LL;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		ans |= x;
	}
	cout << ans << endl;
	return 0;
}
