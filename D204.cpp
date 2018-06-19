#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int mid = n/2;
	for (int i=0;i<=mid;i++){
		for (int j=0;j<=mid+i;j++){
			if (j == mid-i || j == mid+i) cout << "#";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i=mid-1;i>=0;i--){
		for (int j=0;j<=mid+i;j++){
			if (j == mid-i || j == mid+i) cout << "#";
			else cout << " ";
		}
		cout << endl;
	}
}
