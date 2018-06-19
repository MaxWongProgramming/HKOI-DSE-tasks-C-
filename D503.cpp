#include<stdio.h>
int main(){
	int a[6];
	int i,j;
	FILE* fptr = fopen("chart.txt", "w");
	for (i=0;i<6;i++){
		scanf("%d", &a[i]);
	}
	fprintf(fptr,"+-------------------------+\n");
	for (i=10;i>0;i--){
		fprintf(fptr,"| ");
		for (j=0;j<6;j++){
			if (a[j] >=i){
				fprintf(fptr, "### ");
			}
			else{
				fprintf(fptr, "    ");
			}
		}
		fprintf(fptr, "|\n");
	}
	fprintf(fptr,"+-------------------------+");
	fclose(fptr);
	return 0;
}
