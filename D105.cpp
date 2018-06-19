#include<bits/stdc++.h>
using namespace std;
int main(){
	int y1,m1,d1,y2,m2,d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	if (y1 < y2) cout << "Before" << endl;
	else if (y2 < y1) cout << "After" << endl;
	else{
		if (m1 < m2) cout << "Before" << endl;
		else if (m2 < m1) cout << "After" << endl;
		else{
			if (d1 < d2) cout << "Before" << endl;
			else if (d2 < d1) cout << "After" << endl;
			else cout << "Same" << endl;
		}
	}
}
