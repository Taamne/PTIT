#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long a[100005];
	for(int i  = 0; i <n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	long long sum = 0;
	// -1 -2 -3 -4
	long long sum1 = a[n-1] * a[n-2] * a[n-3];
	long long sum2 = a[1] * a[n-1] * a[0];
	long long sum3 = max(sum1, sum2);
	
	sum3 = max(sum3, a[0] *a[1]);
	
	sum3 = max(sum3, a[n-1] * a[n-2]);
	cout << sum3;
}
