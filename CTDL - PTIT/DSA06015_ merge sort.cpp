#include<bits/stdc++.h>

using namespace std;
10 9 8 7 6 5 4 3 2 1
l=0, r=9
m=4

void merge(int a[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	// tach cac mang 
	
	int L[n1], R[n2];
	for( int i = 0; i < n1; i++){
		L[i] = a[l + i];
	
	}
	for( int j = 0; j < n2; j++){
		R[j] = a[m + 1 + j];
	}
	// gan 2 mang tao vao mang a
	i = 0;
	j = 0;
	k = l;
	while( i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
			
		}
		else{
			a[k] = R[j];
			j++;
			
		}
		k++;
		
	}
	// copy cac phan tu con lai cua mang vao mang a
	while( i < n1 ){
		a[k] = L[i];
		i++;
		k++;
	}
	while( j < n2 ){
		a[k] = R[j];
		j++;
		k++;
	}
	
}

void mergeSort(int a[], int l, int r){
	if( l < r)
	{
		int m = l+(r-l)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for( int i=0; i<n; i++){
			cin >> a[i];
			
		}
		mergeSort(a, 0 , n-1);
		for( int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	
}
