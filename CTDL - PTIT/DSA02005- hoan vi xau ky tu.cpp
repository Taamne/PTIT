/* 
#include<bits/stdc++.h>
using namespace std;

int a[1005], n, k, ok;
string s;

void bynaryGen(){
	n = s.length();
	int i = n-1;
	while(i > 0 && a[i] > a[i+1]){
		i--;
	}
	if(i==0) ok = 0;
	else {
		int j = n;
		while(i < j && a[i] > a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		i++;
		j=n;
		while(i < j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n= s.length();
		ok = 1;
		for(int i = 1; i <= n ; i++){
			a[i] = i;
		}
		while(ok){
			for(int i = 1; i <= n ; i++){
				cout << char(a[i] + 64) ;
			}
			cout <<" ";
			bynaryGen();
		}
		cout << endl;
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int n, a[105];
string s;
bool check[105];
void xuat(){
	for(int i = 1; i <=n ; i++){
		cout << char(a[i] + 64);
	}
	cout <<" ";
}
void Try(int i){
	for(int j = 1; j <= n ; j++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i==n) {
				xuat();	
			} 
			
			else{
				Try(i+1);
			}
			check[j]= false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		 n = s.length();
		Try(1);
		cout << endl;
	}
}

