#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d,r1,r2;
	scanf("%lf%lf%lf", &a, &b, &c);
	d = b*b - 4*a*c;
	if (d > 0){
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		printf("%.3lf %.3lf", min(r1,r2), max(r1,r2));
	} else if (d == 0){
		r1 = -b/(2*a);
		printf("%.3lf", r1);
	} else {
		printf("None");
	}
	return 0;
}
