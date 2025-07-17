#include<bits/stdc++.h>
using namespace std;
long long Summ_Min(string x, string y){
	int n = max(x.length(), y.length());
	long long res=0;
	int k = 0;
	for(int i = n-1; i>=0; i--){
		if(x[i] == '6') x[i] = '5';
		if(y[i] == '6') y[i] = '5';

		
		
		res += pow(10 , k) * (x[i] - '0' + y[i] - '0');
		k++;
	}
	return res;
}
long long Sum_Min(string x, string y){
	int n = max(x.length(), y.length());
	long long res=0;
	int k = 0;
	for(int i = n-1; i>=0; i--){
		if(x[i] == '6') x[i] = '5';
		
		if(y[i] == '6') y[i] = '5';
		res += pow(10 , k) * (x[i] - '0' + y[i] - '0');
		k++;
	}
	return res;
}
long long Sum_Max(string x, string y){
	int n = max(x.length(), y.length());
	long long res=0;
	int k = 0;
	for(int i = n-1; i>=0; i--){
		if(x[i] == '5') x[i] = '6';
		
		if(y[i] == '5') y[i] = '6';
		res += pow(10 , k) * (x[i] - '0' + y[i] - '0');
		k++;
	}
	return res;
}
int main(){
	string x,y;
	cin >> x >> y;
	cout << Sum_Min(x,y) <<" " << Sum_Max(x,y);
}
