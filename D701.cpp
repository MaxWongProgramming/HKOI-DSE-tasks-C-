#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> a;
	char cmd[5];
	int n;
	cin >> n;
	int i;
	for (i=0;i<n;i++){
		scanf("%s", cmd);
		if (cmd[1] == 'U'){
			int p;
			cin >> p;
			a.push(p);
		}
		else if (cmd[1] == 'O'){
			if (a.size()!=0){
				a.pop();
			}
			else{
				cout << "Cannot pop" << endl;
			}
		}
		else if (cmd[1] == 'R'){
			if (a.size()!=0){
				cout << a.front() << endl;
			}
			else{
				cout << "Empty" << endl;
			}
		}
		else{
			cout << a.size() << endl;
		}
	}
	return 0;
}
