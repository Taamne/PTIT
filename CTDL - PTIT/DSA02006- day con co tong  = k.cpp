#include<bits/stdc++.h>
using namespace std;
int n, a[1005], x[1005], sum, cnt, b[1005];
void xuat(){
	cnt = 0;
	int  s= 0;
	int k = 0;
	for(int i= 1; i<= n ; i++){
		if(x[i]){
			s+= a[i];
			b[k++] = a[i];
		}
	}
	if(s == sum) {
		cnt ++;
		cout <<"[";
		for(int i = 1; i<= k ; i++){
			cout <<b[i];
			if(i != k){
				cout <<" ";
			}
			
		}
		cout <<"] ";
		
	}

}
void Try(int i){
	for(int j = 1; j>=0; j--){
		x[i] = j;
		if(i == n){
			xuat();
		}
		else {
			Try(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> sum;
		for(int i = 1; i <= n ; i++){
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		Try(1);
		if(cnt == 0 ) cout <<"-1";
		cout << endl;
	}
}
