#include<bits/stdc++.h>
using namespace std;
int main(){
	char target[11],test[11];
	int a[26]={0,}, b[26]={0,};
	scanf("%s", target);
	int i,j,n,len=strlen(target);
	for (i=0;i<len;i++){
		a[target[i] - 'A']++;
	}
	scanf("%d", &n);
	for (i=0;i<n;i++){
		for (j=0;j<26;j++){
			b[j] = 0;
		}
		scanf("%s", test);
		int lentest = strlen(test);
		for (j=0;j<lentest;j++){
			b[test[j] - 'A']++;
		}
		int flag = 1;
		for (j=0;j<26;j++){
			if (a[j] < b[j]){
				flag = 0;
			}
		}
		if (flag){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
