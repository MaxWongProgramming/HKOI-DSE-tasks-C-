#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	for (int i=0;i<a.size();i++){
		if (isupper(a[i])) a[i] ^= 32;
	}
	for (int i=0;i<b.size();i++){
		if (isupper(b[i])) b[i] ^= 32;
	}
	if (a.compare(b) < 0) cout << "Smaller" << endl;
	else if (!a.compare(b)) cout << "Equal" << endl;
	else cout << "Greater" << endl;
}
