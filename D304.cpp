#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[21],b[21];
	gets(a);
	int i,j,k,l,len;
	len = strlen(a);
	for (i=0; i<len; i++) {
		b[i] = '_';
	}
	b[len] = '\0';
	for (j=0; j<10000; j++) {
		char guess;
		scanf("%c", &guess);
		getchar();
		for (k=0; k<len; k++) {
			if (a[k] == guess) {
				b[k] = guess;
			}
		}
		b[len] = '\0';
		for (l=0; l<len; l++) {
			printf("%c", b[l]);
		}
		printf("\n");
		if(strcmp(a,b)==0) {
			break;
		}
	}
	return 0;
}
