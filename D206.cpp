#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n << endl;
	for (int i=0;i<100000;i++){
		if (n%2 == 0){
			n /= 2;
			cout << n << endl;
		}
		if (n&1 && n!=1){
			n = 3*n + 1;
			cout << n << endl;
		}
		if (n == 1) return 0;
	}
}
