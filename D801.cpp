#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> myset;
	set<int>::iterator it;
	int n,q;
	cin >> n >> q;
	int i,a[n], find;
	for (i=0;i<n;i++){
		cin >> a[i];
		myset.insert(a[i]);
	}
	for (i=0;i<q;i++){
		cin >> find;
		it = myset.find(find);
		if (it == myset.end()){
			cout << "No" << endl;
		}
		else{
			cout << "Yes" << endl;
		}
	}
}
