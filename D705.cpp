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
	int y;
	scanf("%d", &y);
	if (y==1){
		printf("%d\n-1", b[h]);
		return 0;
	}
	int p = h;
	for (i=1;i<y-1;i++){
		p=b[p];
	}
	printf("%d\n%d %d %d", h, p, a[p], b[b[p]]);
	return 0;
}
