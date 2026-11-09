#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Donner deux entiers : ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d et b=%d",a,b);
    return 0;
}
