#include<bits/stdc++.h>
using namespace::std;

long gcd(long a, long b){
	return b == 0? a : gcd(b, a % b);
}

int main(){
	int n;
	cin >> n;
	long mcd = 0;
	long x;
	for(int i=0; i<n; i++){
		cin >> x;
		mcd = gcd(mcd,x);
	}
	puts(mcd == 1? "0": "-1");
	return 0;
}
