#include<stdio.h>
void main(){
    int n,i;
    long s=0;
    printf("Donner n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    s=s+i*i;
    }
    printf("S=%ld",s);
}
