#include<stdio.h>
void main(){
    int N,i;
    float s=0;
    printf("Donner N:");
    scanf("%d",&N);
    if(N<=0){
    printf("N invalide");
    return;
    }
    for(i=1;i<=N;i++){
    s=s+1.0/i;
    }
    printf("S=%.4f",s);
}
