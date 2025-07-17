#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n1, n2, n3;
		
		cin >> n1 >> n2 >> n3;
		ll a[n1+10], b[n2+10], c[n3+10];
		for(int i = 0; i<n1; i++){
			 cin >> a[i];
		}
		for(int i = 0 ; i<n2; i++){
			 cin >> b[i];
		}
		for(int i = 0 ; i<n3; i++){
			cin >> c[i];
		}
		ll i=0, j=0, k=0;
		queue<int> q;
		
		while(i < n1 && j <n2 && k < n3){
			if(a[i] == b[j] && c[k] == a[i]) {
				q.push(a[i]);
				i++;
				j++;
				k++;
			}
			else{
			
				ll Max = max(a[i], b[j]);
				Max = max(Max, c[k]);
				
				if(Max == a[i]){
					while(b[j] < a[i]){
						j++;
					}
					while(c[k] < a[i]){
						k++;
					}
				}
				if(Max == b[j]){
					while(a[i] < b[j]){
						i++;
					}
					while(c[k] < b[j]){
						k++;
					}
				}
				if(Max == c[k]){
					while(a[i] < c[k]){
						i++;
					}
					while(b[j] < c[k]){
						 j++;
					}
				}
			}
		}if(q.empty()){
			cout <<"-1";
		}
		else
		while(!q.empty()){
			cout << q.front() <<" ";
			q.pop();
		}
		cout <<endl;
	}
}
