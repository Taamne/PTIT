#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
}
void Sort(int a[], int n){	
	int cnt =0;
	for (int i = 0; i < n - 1; i++){
		int check = 0, pos, min = 2e6;
		for (int j = i+1; j <n ; j++)
		   if(a[j] < a[i] && min > a[j]){
				pos = j;
		    	min = a[j];   
		        check =1;
		   }
		   if(check == 1){
		   	cnt++ ;
		   	swap(a[i], a[pos]);
	}
}
	cout << cnt << endl;
	
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		
		int a[n+5];
		nhap(a, n);
		Sort(a,n);
	}
}

