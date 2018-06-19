#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	if (x%10 == 1 && x%100 != 11) cout << x << "st" << endl;
	if (x%10 == 2 && x%100 != 12) cout << x << "nd" << endl;
	if (x%10 == 3 && x%100 != 13) cout << x << "rd" << endl;
	if (x%10 != 1 && x%10 != 2 && x%10 != 3) cout << x << "th" << endl;
	if (x%10 == 1 && x%100 == 11) cout << x << "th" << endl;
	if (x%10 == 2 && x%100 == 12) cout << x << "th" << endl;
	if (x%10 == 3 && x%100 == 13) cout << x << "th" << endl;
}
