#include <stdio.h>
int main(){
    float brut,retraite,residence,securite,mutuelle,forfait,net;
    printf("Donner le salaire brut : ");
    scanf("%f",&brut);

    retraite=brut*0.06;
    residence=brut*0.03;
    securite=brut*0.0475;
    mutuelle=brut*0.02;
    forfait=50.000;

    net=brut+residence+forfait-retraite-securite-mutuelle;

    printf("Salaire brut : %.3f\n",brut);
    printf("Retenue retraite : %.3f\n",retraite);
    printf("Indemnite de residence : %.3f\n",residence);
    printf("Retenue securite sociale : %.3f\n",securite);
    printf("Retenue mutuelle : %.3f\n",mutuelle);
    printf("Indemnite forfaitaire : %.3f\n",forfait);
    printf("Net a payer : %.3f\n",net);

    return 0;
}
