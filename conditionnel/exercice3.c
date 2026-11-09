#include <stdio.h>
int main(){
    float c,m;
    printf("Donner la consommation en kWh : ");
    scanf("%f",&c);
    if(c<0)
        printf("Consommation invalide");
    else{
        if(c<=100)
            m=500+c*70;
        else if(c<=250)
            m=500+100*70+(c-100)*85;
        else
            m=500+100*70+150*85+(c-250)*95;
        printf("Montant a payer : %.2f millimes",m);
    }
    return 0;
}
