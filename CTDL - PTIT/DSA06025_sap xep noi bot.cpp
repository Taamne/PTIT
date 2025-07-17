#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void Swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
void BubbleSort(int a[], int n){
	int cnt = 1;
	for(int i = 0; i < n-1; i++){
		int check = 0;
		for ( int j = 0; j < n - i - 1 ; j++){
			if(a[j] > a[j+1] ) {
				Swap(a[j], a[j+1]);
				check = 1;
			}
		}
		if(check == 1){
			cout <<"Buoc " << cnt <<": ";
		for(int k = 0; k < n; k++){
			cout << a[k] <<" ";
			
		}
					cnt ++;

		
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n+5];
	for( int i = 0; i<n; i++){
		cin >> a[i] ;
	}
	BubbleSort(a, n);
}

