#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> pq;
		for(int i = 0; i<n; i++){
			int x;
			cin >> x;
			
			pq.push_back(x);
		}
		sort(pq.begin(), pq.end());
		int opt = 0;
		while(pq.size() > 1){
			int first = pq[0];
			pq.erase(pq.begin());
			int second = pq[0];
			pq.erase(pq.begin());
			opt += first + second;
			pq.push_back(first+second);
			sort(pq.begin(), pq.end()); 
			
		}
		cout << opt << endl;
		
	}
}
