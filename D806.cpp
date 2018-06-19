#include<stdio.h>
#include<stdlib.h>
void randomFunctionLOL(int l, int r){
	if (l==r) return ;
	int mid = (l+r)/2;
	randomFunctionLOL(l,mid);
	randomFunctionLOL(mid+1,r);
	printf("%d %d %d %d\n", l, mid, mid+1, r);
}
int main(){
	int n;
	scanf("%d", &n);
	randomFunctionLOL(1,n);
	return 0;
}
