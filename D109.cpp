#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	int a[6] = {1000,500,100,50,20,10};
	for (int i=0;i<6;i++){
		while (x >= a[i]){
			x -= a[i];
			cout << a[i] << endl;
		}
	}
	return 0;
}
