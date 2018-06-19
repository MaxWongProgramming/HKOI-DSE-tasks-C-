#include<bits/stdc++.h>
int main(){
	char str[51], sub[51];
	scanf("%s%s", str, sub);
	int lensub = strlen(sub), lenstr = strlen(str);
	char temp[lensub];
	int i,j,count=0,cntstr = 0;
	for (i=0;i<=lenstr-lensub;i++){
	    if (strncmp(str+i,sub,lensub)==0){
	        cntstr++;
	    }
	}
	printf("%d\n", cntstr);
	cntstr = 0;
	for (i=0;i<=lenstr-lensub;i++) {
        if (strncmp(str+i,sub,lensub)==0) {
            cntstr++;
            i += lensub-1;
        }
    }
    printf("%d", cntstr);
	return 0;
}
