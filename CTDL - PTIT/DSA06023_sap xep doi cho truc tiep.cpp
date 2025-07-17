#include<bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b){
	int tmp = a;
	 a = b;
	 b = a;
}
void InsectionSort(int a[], int n){
	int cnt= 0;
	for(int i = 0;i < n-1; i++){
		for(int j = i + 1; j < n ;  j++){
			if(a[j] < a[i]) swap(a[i], a[j]);
		}
		
		cout << "Buoc " << i+1 << ": ";

		for(int k = 0; k < n; k++){
			cout << a[k] <<" ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n+5];
	for( int i = 0; i < n ; i++){
		cin >> a[i];
	}
	InsectionSort(a, n);
}
