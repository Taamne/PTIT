#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k ;
		int a[k+1];
		for(int i = 1; i<= k ; i++){
			a[i] = i;
		}
			stack <string > st;
			while(1){
				string s = "";
				for(int i = 1; i<=k ; i++){
					s+= to_string(a[i]);
					s+=" ";
				}
				st.push(s);
				int ok = 0;
				for(int i = k; i>=1; i--){
					if(a[i] != n - k + i){
						ok = 1;
						a[i]++;
						for(int j = i + 1; j<= k ; j++)
						
							a[j] = a[j-1] + 1;
							break;
					
						
					}
					
				}
				if(ok == 0)
					break;
			}
		
		while(st.size()){
			cout << st.top() << endl;
			st.pop();
		}
		cout << endl;
	}
}
