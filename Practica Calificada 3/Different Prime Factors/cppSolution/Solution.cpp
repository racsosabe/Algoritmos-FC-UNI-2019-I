#include<bits/stdc++.h>
using namespace::std;

const int MAX = 1000000+5;

int q;
int pf[MAX];

void init(){
	for(int i=1; i<MAX; i++) pf[i] = i;
	for(int i=2; i*i<MAX; i++){
		if(pf[i] == i){
			for(int j=i*i; j<MAX; j+=i){
				pf[j] = i;
			}
		}
	}
}

int main(){
	init();
	cin >> q;
	int x;
	while(q--){
		scanf("%d",&x);
		int ans = 0;
		while(x != 1){
			int f = pf[x];
			while(x % f == 0){
				x /= f;
			}
			ans += 1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
