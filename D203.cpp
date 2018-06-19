#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	for (int i=0;i<10;i++){
		for (int j=1;j<=10;j++){
			int num = 10*i+j;
			if (num/10 == x || num%10 == x || num%x == 0) cout << "Clap";
			else cout << num;
			cout << ((j<10)?" ":"\n");
		}
	}
	return 0;
}
