#include<bits/stdc++.h> 
using namespace std; 
bool cmp(pair<int,int>a,pair<int,int>b){ 
	return a.first<b.first;
}
int main(){
	int t; 
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n; 
		vector<pair<int,int>>vp; 
		for(int i=0;i<n;i++){ 
			int x;
			cin>>x; 
			vp.push_back({x,i}); 
		} 
		sort(vp.begin(),vp.end(),cmp); 
		int res=-1e9; 
		int last=vp[0].second; 
		for(int i=1;i<n;i++){ 
		0  1  2 3 4 5  6  7  8
		34 8 10 3 2 80 30 33 1
		8 4 3 1 2  6  7  0  5
		1 2 3 8 10 30 33 34 80
		last = 8
		res = -4
		last = 4
		res = -1
			if(vp[i].second-last>res){ 
				res=max(vp[i].second-last, res); 
			} 
			last=min(last,vp[i].second); 
		}
		cout<<res<<endl; 
	} 
}
