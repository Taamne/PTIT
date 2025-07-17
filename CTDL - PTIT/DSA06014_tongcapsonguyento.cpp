#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int checknt(int n){
	if( n < 2 ) return 0;
	for(int i=2; i<= sqrt(n); i++){
		if( n % i == 0) return 0;
	}
	return 1;
}
int ngto(int n){
	for(int i=2; i<= n/2; i++){
		if( checknt(i) ==1 && checknt(n-i) == 1) return i;
		 
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ngto(n) << " " <<n-ngto(n) << endl;;
	}

}

