#include<stdio.h>
#include<string.h>
int main() {
	char s[3][4];
	int i;
	for (i=0; i<3; i++) {
		gets(s[i]);
	}
	//horizontal
	if (s[0][0]=='O'&&s[0][1]=='O'&&s[0][2]=='O') {
		printf("O wins");
	} else if (s[1][0]=='O'&&s[1][1]=='O'&&s[1][2]=='O') {
		printf("O wins");
	} else if (s[2][0]=='O'&&s[2][1]=='O'&&s[2][2]=='O') {
		printf("O wins");
	} else if (s[0][0]=='X'&&s[0][1]=='X'&&s[0][2]=='X') {
		printf("X wins");
	} else if (s[1][0]=='X'&&s[1][1]=='X'&&s[1][2]=='X') {
		printf("X wins");
	} else if (s[2][0]=='X'&&s[2][1]=='X'&&s[2][2]=='X') {
		printf("X wins");
	}
	//vertical
	else if (s[0][0]=='O'&&s[1][0]=='O'&&s[2][0]=='O') {
		printf("O wins");
	} else if (s[0][1]=='O'&&s[1][1]=='O'&&s[2][1]=='O') {
		printf("O wins");
	} else if (s[0][2]=='O'&&s[1][2]=='O'&&s[2][2]=='O') {
		printf("O wins");
	} else if (s[0][0]=='X'&&s[1][0]=='X'&&s[2][0]=='X') {
		printf("X wins");
	} else if (s[0][1]=='X'&&s[1][1]=='X'&&s[2][1]=='X') {
		printf("X wins");
	} else if (s[0][2]=='X'&&s[1][2]=='X'&&s[2][2]=='X') {
		printf("X wins");
	}
	//diagonal
	else if (s[0][0]=='O'&&s[1][1]=='O'&&s[2][2]=='O') {
		printf("O wins");
	} else if (s[2][0]=='O'&&s[1][1]=='O'&&s[0][2]=='O') {
		printf("O wins");
	} else if (s[0][0]=='X'&&s[1][1]=='X'&&s[2][2]=='X') {
		printf("X wins");
	} else if (s[2][0]=='X'&&s[1][1]=='X'&&s[0][2]=='X') {
		printf("X wins");
	}
	//draw
	else if (strchr(s[0],'.') == NULL&&strchr(s[1],'.') == NULL&&strchr(s[2],'.') == NULL) {
		printf("Draw");
	} else {
		printf("Not ended");
	}
	return 0;
}
