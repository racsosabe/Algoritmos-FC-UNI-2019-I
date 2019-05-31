#include<bits/stdc++.h>
using namespace::std;

bool unique(string s){
	int mask = 0;
	for(int i=0; i<s.size(); i++){
		if(mask & (1<<(s[i]-'a'))) return false;
		mask ^= 1<<(s[i]-'a');
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=1; j<27 and i + j - 1 < n; j++){
			if(!unique(s.substr(i,j))) break;
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
