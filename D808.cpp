#include<stdio.h>
#include<stdlib.h>
int sum = 0;
void quicksort(int a[],int l,int r){
	sum += r-l+1;
	if (l>=r){
		return ;
	} 
	int temp,p=a[r],i=l,j;
	for(j=l;j<r;j++){
		if (a[j] <= p){
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			i++;
		}
	}
	temp = a[i];
	a[i] = a[r];
	a[r] = temp;
	quicksort(a,l,i-1);
	quicksort(a,i+1,r);
}
int main(){
	int n;
	scanf("%d", &n);
	int j,temp,a[n];
	for (j=0;j<n;j++){
		scanf("%d", &a[j]);
	}
	quicksort(a,0,n-1);
	for (j=0;j<n;j++){
		printf("%d%c", a[j], j==n-1?'\n':' ');
	}
	printf("%d", sum);
	return 0;
}
