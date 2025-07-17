#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void update(int b[105][105] , int k, int a[], int n){
	
	for(int j = 0; j <= k ; j++){
		b[k][j] = a[j]; 
	}
}

void Sort(int a[], int n){
	int x, pos, b[105][105];
	b[0][0]=a[0];
		int k = 0;
		for(int i = 1 ; i < n ; i++){
		x = a[i];
		pos = i -1;
		while ( pos >= 0 && x  < a[pos]){
			a[pos+1] = a[pos];
			pos --;
		}
		a[pos + 1] = x;
		update ( b, i, a, n);

	}
	for(int i = n-1; i>=0; i--){
		cout << "Buoc " << i << ": ";
		for(int j  = 0; j<=i; j++){
			cout << b[i][j] << " " ;
		}
	cout << endl;
	}
	
}

int main(){
	int n;
	cin >> n;
	int a[n+5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	Sort(a,n);
}

