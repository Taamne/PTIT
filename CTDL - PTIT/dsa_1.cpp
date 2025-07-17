#include<bits/stdc++.h>
using namespace std;
int a[1005], n, ok, k, x[1005];
queue<int > q;
void binary(){
	for(int i = 1; i<= k; i++){
		q.push(a[i]);
	}
	int i = k; 
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		i++;
		for(int j = i; j<=k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int check(int a[], int x[], int k){
	for(int i = 1; i<= k ; i++){
		if(x[i] != a[i]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k; 
		for(int i = n-k+1; i<= n  ; i++){
			q.push(i);
		}
		for(int i = 1; i<= k ; i++){
			cin >> x[i];
		}
		for(int i = 1; i<=k ; i++){
			a[i] = i;
		}
		ok = 1;
		while(ok){
			if(check(x,a,k)){
				while(!q.empty()){
					cout << q.front() <<" ";
						q.pop();
				}
				cout << endl;
				break;
			}
				while(!q.empty())
				q.pop();
			
				binary();
			
		}
	}
	
}





