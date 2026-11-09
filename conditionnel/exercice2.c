#include <stdio.h>
#include <string.h>
int main(){
    char bac[30];
    float m;
    printf("Donner le bac : ");
    scanf("%s",bac);
    printf("Donner la moyenne : ");
    scanf("%f",&m);
    if((strcmp(bac,"maths")==0 && m>=11)||
       ((strcmp(bac,"naturelles")==0||strcmp(bac,"economique")==0)&&m>=12)||
       (strcmp(bac,"lettres")==0&&m>=12.5))
        printf("Admis");
    else
        printf("Non admis");
    return 0;
}
