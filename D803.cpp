#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b){
	return *(int*)a > *(int*)b;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n],i,j;
	for (i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (i=1;i<=n;i++){
		qsort(a,i,sizeof(int),cmp);
		for (j=0;j<i;j++){
			printf("%d%c", a[j], j==i-1?'\n':' ');
		}
	}
	return 0;
}

