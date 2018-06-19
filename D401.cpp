#include<bits/stdc++.h>
using namespace std;
int a[45321343];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, j;
    cin >> n;
    for (i = 2; i <= n; i++) {
        if (a[i] == 0) {
            cout << i << endl;
            if (i > 1000){
					continue;
					}
            for (j = i*i; j <= n; j = j + i) {
                a[j] = 1;
            }
        }
    }
    return 0;
}
