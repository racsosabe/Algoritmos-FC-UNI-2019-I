#include<bits/stdc++.h>
using namespace::std;

void insertionSort(vector<int> &A){
	int n = A.size();
	for(int j=1; j<n; j++){
		int key = A[j];
		int i = j-1;
		while(i >= 0 and A[i] > key){
			A[i+1] = A[i];
			i -= 1;
		}
		A[i+1] = key;
	}
}

int main(){
	int n;
	vector<int> A;
	cin >> n;
	A.resize(n);
	for(int i=0; i<n; i++) cin >> A[i];
	insertionSort(A);
	for(int i=0; i<n; i++){
		printf("%d%c",A[i],(i+1==n?'\n':' '));
	}
	return 0;
}
