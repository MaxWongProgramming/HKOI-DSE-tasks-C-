#include<stdio.h>
#include<string.h>
int main() {
	int length,t1, t2;
	char check[12];
	gets(check);
	length = strlen(check);
	if(length == 7) {
		t1 = 9*36 + 8*(check[0]-55) + 7 * (check[1]-'0') + 6 * (check[2]-'0') + 5 * (check[3]-'0') + 4 * (check[4]-'0') + 3 * (check[5]-'0') + 2 * (check[6]-'0');
		t2 = t1%11;
		t2 = 11-t2;
		check[7] = '(';
		check[9] = ')';
		if(t2 == 11) {
			t2 -= 11;
		}
		if(t2 == 10) {
			check[8] = 'A';
			check[10] = '\0';
			puts(check);
		}
		if(t2 != 10) {
			check[8] = t2 + '0';
			check[10] = '\0';
			puts(check);
		}
	}
	if(length == 8) {
		t1 = 9*(check[0]-55) + 8*(check[1]-55) + 7*(check[2]-'0') + 6*(check[3]-'0') + 5*(check[4]-'0') + 4*(check[5]-'0') + 3*(check[6]-'0') + 2*(check[7]-'0');
		t2 = t1%11;
		t2 = 11-t2;
		check[8] = '(';
		check[10] = ')';
		if(t2 == 10) {
			check[9] = 'A';
			check[11] = '\0';
			puts(check);
		}
		if(t2 != 10) {
			check[9] = t2 + '0';
			check[11] = '\0';
			puts(check);
		}
	}
	return 0;
}

