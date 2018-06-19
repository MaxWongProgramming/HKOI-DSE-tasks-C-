#include<bits/stdc++.h>
int f(char c){
     if ((c>='A' && c<='Z')||(c>='a' && c<='z')||(c>='0' && c<='9')){
        return 1;
     }
     else{
          return 0;
     }
}
int main(){
	char a[51];
	gets(a);
	int i,flag = 0, len = strlen(a);
	for (i=0;i<len;i++){
		if (a[i] == '@'){
			flag++;
		}
	}
	if (flag!=1){
		printf("Invalid\n");
		return 0;
	}
	char *back;
	back = strchr(a, '@')+1;
	char front[51];
	i=0;
	while(a[i]!='@'){
		front[i] = a[i];
		i++;
	}
	int lenf = strlen(front),lenb = strlen(back);
	if (front[0] == '.' || front[lenf-1] == '.'){
		printf("Invalid\n");
		return 0;
	}
	int count = 0;
	for (i=0;i<lenf;i++){
		if (f(front[i])||front[i]=='.'||front[i]=='+'){
			count++;
		}
		if (front[i-1]=='.' && front[i]=='.'){
			printf("Invalid\n");
			return 0;
		}
	}
	if (count == 0){
		printf("Invalid\n");
		return 0;
	}
	if (back[0] == '.'||back[lenb-1]=='.'){
		printf("Invalid\n");
		return 0;
	}
	count=0;
	int count1=0;
	for (i=0;i<lenb;i++){
		if (f(back[i])||back[i]=='.'||back[i]=='-'){
			count++;
		}
		if (back[i]=='.'){
			count1++;
		}
		if ((back[i]=='-'&&back[i+1]=='.')||(back[i]=='.'&&back[i+1]=='-')){
			printf("Invalid\n");
			return 0;
		}
	}
	if (count<3){
		printf("Invalid\n");
		return 0;
	}
	if (count1==0){
		printf("Invalid\n");
		return 0;
	}
	if (strchr(front, '-')!=NULL){
		printf("Invalid\n");
		return 0;
	}
	if (strchr(back, '+')!= NULL){
		printf("Invalid\n");
		return 0;
	}
	printf("Valid\n");
	return 0;
}
