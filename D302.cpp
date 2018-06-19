#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin>>ws,str);
	cout << str.size() << endl;
	int cnt = 1;
	cnt += count(str.begin(),str.end(),' ');
	cout << cnt << endl;
}
