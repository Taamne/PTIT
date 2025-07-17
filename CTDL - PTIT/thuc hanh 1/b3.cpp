#include<bits/stdc++.h>
using  namespace std;
vector < string > v;
string s, name;
int a[1005], n, ok;
void Gen(){
	int i = n-1;
	while(i > 0 && a[i] > a[i+1]){
		i--;
	}
	if(i==0) ok = 0;
	else{
		int j = n;
		while(i < j && a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		i++;
		j = n;
		while(i < j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
}
int main(){
	
	set<string> st;
	cin >> n;
	for(int i = 1; i <= n ; i++){
		cin >> s;
		st.insert(s);
	}
	cin >> name;
	
	for(auto x : st){
		if(x != name)
		v.push_back(x);
	}
	n = v.size();
	ok = 1;
	for(int i = 1; i<= n ; i++){
		a[i] = i;
	}
	while(ok){
		for(int i = 1; i<= n ; i++){
			cout << v[a[i] - 1] <<" ";
			
		}
		cout << name <<" \n";
		Gen();
	}
	
}
