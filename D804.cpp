#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v;
    for (int i=0;i<n+m;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n+m;i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}
