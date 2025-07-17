#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void BubbleSort(int a[], int x, int y){
	for(int i = x; i<y; i++){
		for(int j = x; j< y-i-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, x=0;
		cin >> n >> k;
		int a[n+5], b[n+5];
		for(int i = 0;i < n; i++){
			cin >> a[i];
		}
		for(int i = 0;i <= n-k ;i ++){
			int m = 0;
			for(int j = i; j< i+k; j++){
				m = max(a[j], m);
			}
			b[x] = m;
			x++;

		}
		for(int i = 0; i<n-k+1; i++){
			cout << b[i] <<" ";
		}
		cout << endl;
	}
}

