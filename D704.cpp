#include <stdio.h>
int a[10001], b[10001];
int main(){
	int n,h;
	scanf("%d%d", &n, &h);
	int i;
	for (i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for (i=1;i<=n;i++){
		scanf("%d", &b[i]);
	}
	int x,y;
	scanf("%d%d", &x, &y);
	if (y==0){
		printf("%d\n%d %d\n-1\n", n+1, x , h);
		return 0;
	}
	int p=h;
	for (i=1;i<y;i++){
		p = b[p];
	}
	printf("%d\n%d %d\n%d %d %d", h, x, b[p], p,a[p],n+1);
	return 0;
}
