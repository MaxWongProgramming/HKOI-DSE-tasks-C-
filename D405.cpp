#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,w;
	cin >> h >> w;
	string map[h+1];
	for (int i=0;i<h;i++) cin >> map[i];
	map[h][w-1] = 'S';
	for (int i=h-1;i>=0;i--){
		for (int j=w-1;j>=0;j--){
			if (map[i][j] == '#') continue;
			if (map[i+1][j] == 'S' || map[i+1][j] == 'E'){
				map[i][j] = 'S';
			}
			else if (map[i][j+1] == 'S' || map[i][j+1] == 'E'){
				map[i][j] = 'E';
			}
		}
	}
	int r=0, c=r;
	for (int i = 0; i<h+w-2;i++){
		cout << map[r][c];
		if (map[r][c] == 'S'){
			r++;
		} else c++;
	}
	return 0;
}
