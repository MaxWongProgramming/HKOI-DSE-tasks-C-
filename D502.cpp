#include<stdio.h>
int main(){
	char s[50];
	FILE* fptr = fopen("weather.txt", "r");
	int min=999999,max=-9999;
	while(fgets(s,50,fptr)){
		int temp;
		sscanf(s,"%*32c%d",&temp);
		if (temp < min){
			min = temp;
		}
		if (temp > max){
			max = temp;
		}
	}
	fclose(fptr);
	printf("%d %d", min, max);
	return 0;
}
