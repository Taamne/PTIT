//A
//ABA
//ABACABA
//ABACABADABACABA
//ABACABADABACABAEABACABADABACABA
//
//
//
//A
//AA
//AAAA
//AAAAAAAA
//AAAAAAAAAAAAAAAA
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	
		
	
	int f[1005];
	f[1] = 1;
	for(int i = 2; i<=30; i++){
		f[i] = f[i-1] * 2;
	}
	while(t--){
		int n, k;
		cin >> n >>k;
		for(int i = n; i>=1; i--){
			if(k > f[i]){
				k -= f[i];
			}
			else if(k == f[i]){
				cout << char(i - 1 + 'A') << endl;
				break;
			}
		}
	}

}

