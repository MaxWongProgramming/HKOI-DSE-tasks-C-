#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	for (int i=str.size()-1;i>=0;i--){
		cout << str[i];
	}
	cout << endl;
	string rev = str;
	reverse(rev.begin(),rev.end());
	if (str == rev) cout << "Yes" << endl;
	else cout << "No" << endl;
}
