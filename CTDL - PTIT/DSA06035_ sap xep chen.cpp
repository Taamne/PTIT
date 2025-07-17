#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void InsectionSort( int a[], int n){
	int x, pos, cnt = 0;
	cout << "Buoc 0" << ": " <<a[0] <<endl;
	for( int i = 1; i < n ; i++){
		x = a[i];
		pos = i -1;
		while( pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			pos-- ;
		}
		a[pos + 1] = x;
		cout << "Buoc " << i << ": ";
		for(int k = 0; k <= i ; k++){
			cout << a[k] << " ";
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
	InsectionSort(a , n);
	
}

