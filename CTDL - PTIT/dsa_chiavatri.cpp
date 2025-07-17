#include<bits/stdc++.h>
using namespace std;
 int binary_sort(int a[1005], int n, int k){
 	int low = 0;
 	int high = n-1;
 	while(low <= high){
 		int mid = (low + high)/2;
 			if(k < a[mid]){
 				high = mid -1;
			 }
			 else if(k > a[mid]){
			 	low = mid +1;
			 	
			 }
			 else return mid;
	 }
	 return -1;
 }

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,k;
		int a[n+10];
		cin >> n >> k;
		for(int i  = 0 ; i<n; i++){
			cin >> a[i];
		}
		binary_sort(a, n , k);
	}
}
