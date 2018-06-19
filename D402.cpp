#include<bits/stdc++.h>
int main() {
	int n,m,i,j;
	scanf("%d", &n);
	long long int c[n];
	float p[n],sum=0.0;
	for (i=0; i<n; i++) {
		scanf("%lld %f", &c[i], &p[i]);
	}
	scanf("%d", &m);
	for (i=0; i<m; i++) {
		long long int bc;
		scanf("%lld", &bc);
		for (j=0; j<n; j++) {
			if(bc == c[j]) {
				sum += p[j];
			}
		}
	}
	printf("%.1f", sum);
	system("pause");
	return 0;
}
