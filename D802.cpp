#include<stdio.h>
#include<stdlib.h>
int main() {
	int N,i,j,dir;
	scanf("%d %d", &N, &dir);
	int a[N];
	for(i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}
	if(dir == 0) {
		int temp, count=0;
		for (i=0; i<N; i++) {
			for(j=0; j<N-1; j++) {
				if(a[j]>a[j+1]) {
					temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					count++;
				}
			}
		}
		printf("%d\n", count);
		for (i=0; i<N; i++) {
			printf("%d%c", a[i],i!=N-1?' ':'\n');
		}
	}
	if(dir == 1) {
		int temp, count=0;
		for (i=0; i<N; i++) {
			for(j=0; j<N-1; j++) {
				if(a[j]<a[j+1]) {
					temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					count++;
				}
			}
		}
		printf("%d\n", count);
		for (i=0; i<N; i++) {
			printf("%d%c", a[i],i!=N-1?' ':'\n');
		}
	}
	return 0;
}
