#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int a[], int n, int x){
	int low = 0;
	int high = n-1;
	while(low <= high){
		int mid = (low + high)/2;

		if(x < a[mid]){
			high = mid-1;
			
		}
		else if(x > a[mid]){
			low = mid + 1;
		}
		else return mid;
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[100005];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		if(Binary_Search(a,n,x) == -1) cout << "NO\n";
		else cout << Binary_Search(a,n,x) + 1 <<endl;
	}
}
