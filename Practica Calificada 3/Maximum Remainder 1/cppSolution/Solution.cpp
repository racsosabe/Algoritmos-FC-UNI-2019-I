#include<bits/stdc++.h>
using namespace::std;

int main(){
	int n;
	cin >> n;
	vector<long> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	long maximo = *max_element(v.begin(),v.end());
	long ans = 0LL;
	for(int i=0; i<n; i++){
		if(v[i] < maximo) ans = max(ans,v[i]);
	}
	cout << ans << endl;
	return 0;
}
