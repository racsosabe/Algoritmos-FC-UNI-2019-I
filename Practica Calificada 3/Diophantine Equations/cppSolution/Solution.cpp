#include<bits/stdc++.h>
using namespace::std;

struct coeficientes{
	long x;
	long y;
	coeficientes(long _x, long _y){
		x = _x;
		y = _y;
	}
};

int gcd(int a, int b){
	return b == 0? a : gcd(b, a % b);
}

coeficientes gcdExtended(int a, int b){
	if(b == 0){
		return coeficientes(1,0);
	}
	coeficientes next_step = gcdExtended(b,a%b);
	long x = next_step.y;
	long y = next_step.x - next_step.y * (a/b);
	return coeficientes(x,y);
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int mcd = gcd(a,b);
	if(c % mcd){
		puts("-1");
	}
	else{
		coeficientes ans = gcdExtended(a,b);
		ans.x *= c / mcd;
		ans.y *= c / mcd;
		cout << ans.x << " " << ans.y << endl;
	}
	return 0;
}
