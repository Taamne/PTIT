#include<bits/stdc++.h>
using namespace std;
int  x[1005], ok, n;
string a[10005];
void Binary(){
	int i = n;
	while(i >0 && x[i] == 1){
		x[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else x[i] = 1;
}

int main(){
	cin >> n;
	string s[1005];
	for(int i = 1; i <=n; i++){
		cin >> a[i];
		x[i] = 0; 
	}	
	ok = 1;
	int k = 1;
	while(ok){
		for(int i = 1; i<=n; i++){
			if(x[i]){
				s[k] = s[k] + a[i];
			}
		}
		k++;
		Binary();
		
	}
	sort(s+1, s+1+k);
	for(int i = 1; i<= k ; i++){
		cout <<s[i]<<endl;
	}
}
