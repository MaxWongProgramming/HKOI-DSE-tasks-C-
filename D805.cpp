#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i=0;i<m;i++){
		int l1,l2,r1,r2;
		cin >> l1 >> r1 >> l2 >> r2;
		vector<int> v;
		for (int j=l1-1;j<r1;j++){
			v.push_back(a[j]);
		}
		for (int j=l2-1;j<r2;j++){
			v.push_back(a[j]);
		}
		sort(v.begin(),v.end());
		vector<int>::iterator it;
		for (it =v.begin();it!=v.end();it++){
			cout << *it << ' ';
		}
		cout << endl;
	}
}
