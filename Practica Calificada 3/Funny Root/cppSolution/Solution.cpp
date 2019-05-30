#include<bits/stdc++.h>
using namespace::std;

int digitSum(int x){
	if(x < 10) return x;
	return x%10 + digitSum(x/10);
}

int solve(int n){
	if(n < 10) return n;
	return solve(digitSum(n));
}

int main(){
	string s;
	cin >> s;
	int first_digit_sum = 0;
	for(int i=0; i<s.size(); i++){
		first_digit_sum += s[i] - '0';
	}
	printf("%d\n",solve(first_digit_sum));
	return 0;
}
