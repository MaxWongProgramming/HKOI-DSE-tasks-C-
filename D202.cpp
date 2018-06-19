#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t = sqrt(n);
	for (int i=1;i<=t;i++){
		if (n%i == 0) cout << i << endl;
	}
	if (t*t == n) t--;
	for (int i=t;i>=1;i--){
		if (n%i == 0) cout << n/i << endl;
	}
}
