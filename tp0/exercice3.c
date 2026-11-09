#include <stdio.h>
int main(){
    float L,l,S,P;
    printf("Donner la longueur et la largeur : ");
    scanf("%f%f",&L,&l);
    S=L*l;
    P=2*(L+l);
    printf("Surface=%.2f\nPerimetre=%.2f",S,P);
    return 0;
}
