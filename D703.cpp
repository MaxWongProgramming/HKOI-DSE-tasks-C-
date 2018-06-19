#include <stdio.h>
int main(){
	int n,h;
	scanf("%d%d", &n, &h);
	int i,a[n],b[n];
	for (i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	int ptr = h;
	while (ptr != 0){
		int temp = ptr -1;
		printf("%d\n", a[temp]);
		ptr = b[temp];
	}
	printf("End");
	return 0;
}
