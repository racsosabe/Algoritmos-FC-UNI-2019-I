#include<bits/stdc++.h>
using namespace::std;

int digitSum(long x){
	if(x < 10) return x;
	return x % 10 + digitSum(x / 10);
}

long solve(int S, long n){
	long Discriminante = S*S + 4*n;
	long r = floor(sqrt(Discriminante));
	if(r * r == Discriminante){
		if(r % 2 == S % 2){
			return (r - S) / 2LL;
		}
		else return -1;
	}
	else return -1;
}

int main(){
	long n;
	cin >> n;
	long ans = -1;
	for(int S=1; S<=162; S++){
		long x = solve(S,n);
		if(x > 0 and digitSum(x) == S){
			if(ans == -1) ans = x;
			else ans = min(ans,x);
		}
	}
	cout << ans << endl;
	return 0;
}
