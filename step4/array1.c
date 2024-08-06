#include<stdio.h>
int main(){
    int n, v, a[100], i;
    int vn = 0;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("\n%d", &v);
    for(int j = 0; j < n; j++){
        if(a[j] == v){
            vn++;
        }
    }
    printf("%d", vn);
}