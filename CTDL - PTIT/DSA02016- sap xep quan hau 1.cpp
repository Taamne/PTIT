#include<bits/stdc++.h>
using namespace std;

int n, cot[1005], a[1005], b[1005] , cnt;
void Try(int i){
	for(int j = 1; j<= n ; j++){
		if(!cot[j] && !a[i - j + n] && !b[i + j - 1]){
			cot[j] = 1;
			a[i - j + n ] = 1;
			b[i + j - 1] = 1;
			if( i== n) cnt++;
			else Try(i+1);
			cot[j] = 0;
			a[i - j + n] = 0;
			b[i + j - 1] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n;
		Try(1);
		cout<<cnt<<endl;
	}
}
