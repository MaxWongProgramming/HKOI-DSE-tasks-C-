#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	double a[n][n];
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%lf", &a[i][j]);
		}
	}
	int m,stat1, stat2;
	char ch;
	scanf("%d", &m);
	for (i=0;i<m;i++){
		scanf("%d %d %c", &stat1, &stat2, &ch);
		if ((ch != 'A' && stat1<stat2)||(ch == 'A' && stat1>stat2)){
			swap(stat1, stat2);
			
		}
		printf("%.1lf\n", a[stat1 - 1][stat2 - 1]);
	}
	return 0;
}

