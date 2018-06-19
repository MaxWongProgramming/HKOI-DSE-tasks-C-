#include<bits/stdc++.h>
using namespace std;
int main(){
	float a;
	scanf("$%f", &a);
	a = a/2*10;
	a = ceil(a);
	a = a/10;
	printf("$%.1f\n", a);
	return 0;
}
