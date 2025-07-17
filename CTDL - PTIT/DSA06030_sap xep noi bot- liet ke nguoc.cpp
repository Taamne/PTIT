#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void update(int b[105][105] , int cnt, int a[], int n){
	for(int j = 0; j <= n; j++){
		b[cnt][j] = a[j];
	}
}
void Sort(int a[], int n){
	int b[105][105];
	int cnt = 0;
	for(int i = 0; i<n ; i++){
		int check = 0;
		for(int j = 0; j < n - i - 1; j ++  ){
			if(a[j] > a[j+1]) {
				swap( a[j], a[j+1]);
				check = 1;
			}
		}
		if(check == 1) {
			update(b, cnt, a, n);
						cnt ++;

		}
	}
	for(int i = cnt-1; i >= 0; i--){
		cout << "Buoc " << i+1 << ": ";
		for(int j = 0; j<n ; j++){
			cout << b[i][j] <<" ";
		}
		cout << endl;
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		Sort(a,n);
	}
}

