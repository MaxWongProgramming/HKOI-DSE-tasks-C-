#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338
using namespace std;
int main(){
	int a,b,c;
	float cRad, Area;
	cin >> a >> b >> c;
	cRad = c*pi/180;
	Area = a*b*sin(cRad)/2;
	printf("%.3f", Area);
	return 0;
}
