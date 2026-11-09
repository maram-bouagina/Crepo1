#include <stdio.h>
/*float surface(float a,float b){
    return a*b;
}


float perimetre(float a,float b){
    return (a+b)*2;
}
*/
void afficher(float a,float b){
    printf("La longueur est %.2f",a);
    printf("la largeur est %.2f",b);
}
float surfacePerim(float a,float b,float *s,float * p){
    *s=a*b;
    *p=(a+b)*2;

}
void main(){
    float a,b,p,s;
    printf("donner la longueur et la largeur");
    scanf("%f%f",&a,&b);


    afficher(a,b);
    surfacePerim(a,b,&s,&p);
    printf("la surface est %.2f",s);
    printf("le permietre est %.2f",p);


}
