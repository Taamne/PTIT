#include<bits/stdc++.h>
using namespace std;
int a[105][105], cnt , m,n;

int sum = 0;
   int res=0;  
void Try(int i, int j){
	res+= a[i][j];
	if(i == n && j == n){
		sum = max(res, sum);
		
	}
	if(i < n) Try(i+1,j);
	if(j < n) Try(i, j+1);
	
}

int main(){
	
		cin >> n ;
		for(int i = 1; i<= n ; i++){
			for(int j = 1; j <= n ; j++){
				cin >> a[i][j];
			}
		}
		sum = 0;
		res=0;
		Try(1,1);
		cout << sum << endl;
	
}
