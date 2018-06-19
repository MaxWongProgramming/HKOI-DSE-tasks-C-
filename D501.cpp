#include<bits/stdc++.h>
int main(){
    int n,x;
    FILE *file;
    file = fopen("account.txt", "r");
    fscanf(file, "%d", &n);
    int i,sum=0;
    for (i = 0; i<n ;i++){
        fscanf(file, "%d", &x);
        sum += x;
    }
    printf("%d", sum);
    return 0;
}
