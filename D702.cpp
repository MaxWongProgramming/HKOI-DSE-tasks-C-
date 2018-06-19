#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> stack;
	char cmd[5];
	int n;
	cin >> n;
	int i;
	for (i=0;i<n;i++){
		scanf("%s", cmd);
		if (cmd[0] == 'P' && cmd[1] == 'U'){
			int p;
			cin >> p;
			stack.push(p);
		}
		else if (cmd[0] == 'S'){
			cout << stack.size() << endl;
		}
		else if (cmd[0] == 'T'){
			if (stack.size() != 0){
				cout << stack.top() << endl;
			}
			else{
				cout << "Empty" << endl;
			}
		}
		else{
			if (stack.size() != 0){
				stack.pop();
			}
			else{
				cout << "Cannot pop" << endl;
			}
		}
	}
	return 0;
}
