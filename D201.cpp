#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	cout << int(round((pow((1+sqrt(5)),x)-pow((1-sqrt(5)),x))/(pow(2,x)*sqrt(5)))) << endl;
	return 0;
}
