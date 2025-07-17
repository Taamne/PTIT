#include<bits/stdc++.h>
using namespace std;
int x[1005]={0};
int n;
void print(){
	for(int i = 1; i <= n ; i++){
		if(x[i-1] == 1){
			cout << 1-x[i] ;
		}
		else cout << x[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 0 ; j <= 1; j++){
		x[i] = j;
		if(i == n ) print();
		else Try(i +1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
