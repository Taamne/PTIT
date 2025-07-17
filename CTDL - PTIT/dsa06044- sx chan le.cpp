#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
int main(){
	int n;
	cin >> n;
	vector<int>c;
	vector<int >l;
	for(int i = 1; i <= n ; i++){
		int x;
		cin >> x;
		if(i %2==0){
			c.push_back(x);
		}
		else l.push_back(x);
	}
	sort(l.begin(), l.end());
	sort(c.begin(), c.end(), cmp);
	for(int i = 1; i<=n/2; i++){
		cout << l[i-1] << " ";
		cout << c[i-1] <<" ";
	}
	if(n%2 !=0)
	cout << l[n/2];
}
