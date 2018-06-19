#include<bits/stdc++.h>
using namespace std;
int main() {
	int r=0,b=0,t;
	int N,i,a[10001];
	char cmd[5];
	scanf("%d", &N);
	for (i=0; i<N; i++) {
		scanf("%s", &cmd);
		if (cmd[1] == 'U') {
			scanf("%d", &t);
			a[b++] = t;
			if (b == 10001) {
				b = 0;
			}
		}
		if (cmd[1] == 'O') {
			if(r!=b) {
				r++;
				if (r == 10001) {
					r = 0;
				}
			} else printf("Cannot pop\n");
		}
		if (cmd[1] == 'R') {
			if(r!=b) {
				printf("%d\n", a[r]);
			} else printf("Empty\n");
		}
		if (cmd[1] == 'I') {
			printf("%d\n", (10001+b-r)%10001);
		}
	}
	return 0;
}
