#include<bits/stdc++.h>
using namespace::std;

vector<int> merge(vector<int> &L, vector<int> &R){
	int pL = 0;
	int pR = 0;
	vector<int> ans;
	while(pL < L.size() and pR < R.size()){
		if(L[pL] < R[pR]){
			ans.emplace_back(L[pL]);
			pL += 1;
		}
		else{
			ans.emplace_back(R[pR]);
			pR += 1;
		}
	}
	while(pL < L.size()){
		ans.emplace_back(L[pL]);
		pL += 1;
	}
	while(pR < R.size()){
		ans.emplace_back(R[pR]);
		pR += 1;
	}
	return ans;
}

void mergeSort(vector<int> &A){
	if(A.size() <= 1) return;
	int n = A.size();
	vector<int> L(A.begin(),A.begin()+n/2);
	vector<int> R(A.begin()+n/2,A.end());
	mergeSort(L);
	mergeSort(R);
	A = merge(L,R);
}

int main(){
	int n;
	vector<int> A;
	cin >> n;
	A.resize(n);
	for(int i=0; i<n; i++) cin >> A[i];
	mergeSort(A);
	for(int i=0; i<n; i++){
		printf("%d%c",A[i],(i+1==n?'\n':' '));
	}
	return 0;
}
