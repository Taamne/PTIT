#include<bits/stdc++.h>
using namespace std;
void check(int a[], int n){
	stack<int> st;
	int R[n], i;
	for(i = n-1; i>= 0 ; i--){
		while(!st.empty() && a[i] >= st.top())st.pop();
		if(st.empty()) R[i] =-1;
		else R[i] = st.top();
		st.push(a[i]);
	}
	for(i = 0 ; i<n; i++) cout << R[i] <<" ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0 ; i< n ; i++){
			cin >> a[i];
		}
		check(a,n);
	}
}
