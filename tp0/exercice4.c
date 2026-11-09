#include <stdio.h>
int main(){
    int a,b,c,d,x;
    int P,Pd;
    printf("Donner a,b,c,d et x : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
    P=a*x*x*x+b*x*x+c*x+d;
    Pd=3*a*x*x+2*b*x+c;
    printf("P(x)=%d\nP'(x)=%d",P,Pd);
    return 0;
}
