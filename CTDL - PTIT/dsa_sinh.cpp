#include<bits/stdc++.h>
using namespace std;
int a[1005], n, k, ok;
void binary_hv(){
	int i = n-1; 
	while(i>0 && a[i] > a[i+1] ) {
		i--;
	}
	if( i == 0) ok = 0;
	else{
		int j = n;
		while(i < j && a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		i++;
		j=n;
		while(i < j){
			swap(a[i], a[j]);
			j--;
			i++;
		}
	}
}
void binary_tohop(){
	int i = k;
	while(i>0 && a[i] == n- k + i){
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]++;
		i++;
		for(int j = i ; j<= k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}
void binary_sinh(){
	int i = n;
	while(i > 0 && a[i] == 1){
		a[i] =0;
		i--;
		
	}
	if(i == 0) ok = 0;
	else{
		a[i] =1;
	}
}
int check(int a[], int n){
	if(a[1] == 0 || a[n] == 1) return 0;
	for(int i = 2; i<=n; i++){
		if(a[i] == a[i-1] && a[i] == 1) return 0; 
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >>k;
		string s;
		set<string> st;
		for(int i =1; i<= n; i++){
			cin >> s;
			st.insert(s);
		}
		n = st.size();
		vector<string> v;
		for(auto i : st){
			v.push_back(i);
		}
//		sort(v.begin(); v.end());
		for(int i  = 1; i<= k;  i++){
			a[i] = i;
		}
		ok = 1;
		int x;
		while(ok){
			
			
				for(int i = 1; i<=k; i++){
					cout <<v[a[i]-1]<<" ";
				}
						cout <<endl;

			
			binary_tohop();
		}
		
		cout << endl;
		
		
	}
}
