#include <stdio.h>
#include<stdbool.h>


 void premier(int x, bool * v){
     int i=2;
     while((x%i!=0)&& ( i<x)){
        i++;
     }
     if(i==x)
           *v=true;


     else
        *v=false;

 }
int main(){
    int x;bool res;
    printf("donner un entier");
    scanf("%d",&x);
    premier(x,&res);
    if(res){
        printf(" %d est premier",x);
    }
    else{
        printf(" %d n'est pas premier",x);
    }
    return 1;
}
