#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<int,  vector<int>, greater<int>> pq;
		for(int i = 0; i<n; i++){
			int x;
			cin >> x;
			
			pq.push(x);
		}
//		sort(pq.begin(), pq.end());
		long long opt = 0;
		while(pq.size() > 1){
			int first = pq.top(); pq.pop();
			
			int second = pq.top(); pq.pop();
		
			opt += first + second;
			pq.push(first+second);
			
		}
		cout << opt << endl;
		
	}
}
