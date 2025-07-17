#include<bits/stdc++.h>
using namespace std;

int coins[]= {1,2,5,10,20,50,100,200,500,1000};
int n = sizeof(coins)/sizeof(coins[0]), value, ans[1005], cnt;
void greedy(int value, int coins[], int ans[],int n){
	for(int i = n - 1; i>= 0 ; --i){
		ans[i] = 0;
		while(coins[i] <= value){
			value -= coins[i];
			cnt++;
		}
	}

}
int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0 ;
		cin >> value;
		greedy(value, coins, ans, n);
		cout << cnt << endl;
	}
}
