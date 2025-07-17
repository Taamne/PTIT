#include<bits/stdc++.h>
using namespace std;

int a[1005], b[1005],n, ok;

void Gen(){
	int i = n -1;
	while(i >0 && a[i] > a[i+1]){
		i--;
	}
	if( i== 0) ok = 0;
	else {
		int j = n;
		while(i < j && a[i] > a[j]){
			j--;
			
		}
		swap(a[i], a[j]);
		i++;
		j = n;
		while(i<j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
} 

int main(){
	cin >> n;
	set<int>s;
	for(int i = 1; i<= n ; i++){
		cin >> b[i];
		
	}
	sort(b+1, b+n+1);
	for(int i = 1; i<= n ; i++){
		a[i] = i;
	}
	ok = 1;
	while(ok){
		for(int i = 1; i <= n ; i++){
			cout << b[a[i]]<<" ";
		}
		cout << endl;
		Gen();
	}
}
