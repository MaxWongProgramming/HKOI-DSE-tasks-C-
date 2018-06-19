#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long double sq, tri;
	cin >> n;
	tri = (sqrtl(8*n+1)-1)/2;
	sq = sqrtl(n);
	if (tri == ceill(tri) && sq != ceill(sq)) cout << "Triangular" << endl;
	else if (tri != ceill(tri) && sq == ceill(sq)) cout << "Square" << endl;
	else if (tri == ceill(tri) && sq == ceill(sq)) cout << "Both" << endl;
	else if (tri != ceill(tri) && sq != ceill(sq)) cout << "Neither" << endl;
	return 0;
}
