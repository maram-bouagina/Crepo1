#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,z1,x2,y2,z2,n1,n2,prod;
    printf("Donner x1,y1,z1 : ");
    scanf("%f%f%f",&x1,&y1,&z1);

    printf("Donner x2,y2,z2 : ");
    scanf("%f%f%f",&x2,&y2,&z2);

    n1=sqrt(x1*x1+y1*y1+z1*z1);
    n2=sqrt(x2*x2+y2*y2+z2*z2);
    prod=x1*x2+y1*y2+z1*z2;

    printf("Norme de u=%.2f\n",n1);
    printf("Norme de v=%.2f\n",n2);
    printf("Produit scalaire=%.2f",prod);

    return 0;
}
