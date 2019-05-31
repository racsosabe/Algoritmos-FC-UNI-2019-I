#include<bits/stdc++.h>
using namespace::std;

long solve(long atacante, long defensor){
	if(defensor == 0) return atacante + defensor;
	if(atacante % defensor == 0) return 2*defensor;
	return solve(defensor, atacante % defensor);
}

int main(){
	long x, y;
	cin >> x >> y;
	cout << solve(max(x,y),min(x,y)) << endl;
	return 0;
}
