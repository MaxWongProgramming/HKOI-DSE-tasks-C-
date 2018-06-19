#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	int j,temp,a[n];
	for (j=0;j<n;j++){
		scanf("%d", &a[j]);
	}
	int l=0,r=n-1;
	int p = a[r],i=l;
	for (j=l;j<r;j++){
		if (a[j]<=p){
			std::swap(a[i],a[j]);
			i++;
		}
	}
	std::swap(a[r],a[i]);
	for (j=0;j<n;j++){
		printf("%d%c", a[j], j==n-1?'\n':' ');
	}
	return 0;
}
