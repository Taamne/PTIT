#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void update(int b[105][105],int i, int a[], int n){
		for(int j = 0; j< n ; j++){
		
			b[i][j] = a[j];
	}

}

void Sort(int a[], int n){
	int cnt = 0;
	int b[105][105];
	for(int i = 0; i< n-1; i++){
		for(int j = i+1; j<n; j++ ){
			if(a[j] <a[i]){
				swap(a[i], a[j]);
			}
		}
		cnt ++;
		update(b,i, a, n);
	}
	
	for(int i = cnt-1; i >=0 ; i-- ){
		cout << "Buoc " << i+1 << ": ";
		for( int j = 0; j < n ; j++){
			cout << b[i][j] <<" ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		Sort(a,n);

	}
}

