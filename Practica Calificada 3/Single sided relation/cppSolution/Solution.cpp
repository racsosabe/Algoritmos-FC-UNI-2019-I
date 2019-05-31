#include<bits/stdc++.h>
using namespace::std;

int main(){
	int n;
	int mayores = 0;
	int x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x > 1) mayores += 1;
	}
	puts(mayores <= 1? "Yes":"No");
	return 0;
}
