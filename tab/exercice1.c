#include <stdio.h>
void  saisieRemplirTab(int * n, int t[]){

        do{
            printf("donner la taille du tab");
            scanf("%d",n);

        }while((*n>100 )|| (*n<=0));
        for (int i=0;i<*n;i++){
            printf("donner le case num %d",i+1);
            scanf("%d",&t[i]);
        }}
void affichertab (int t[], int n ){
            for (int i=0;i<n;i++){
            printf("%d \n",t[i]);
        }


}

void min_Max(int n , int t[] , int *min , int *max){

        *max=t[0];
        * min=t[0];
            for (int i=1;i<n;i++){

                    if(t[i]<=*min){
                       * min=t[i];

                    }
                    else if (t[i]>=max){
                        * max=t[i];

                    }
            printf("%d \n",t[i]);
        }}

void calcul_moy (int t [] , int n, float * moy ){
        int s=0;
        for (int i=1;i<n;i++){
            s=s+t[i];
        }
        *moy=s/n;
}

int main(){
        int n ;
        int min , max;
        float moy;
        int t[100];
        saisieRemplirTab(&n,t);
        affichertab(t,n);

        min_Max(n,t,&min,&max);
        printf("le max est %d", max);
        printf("le min est %d", min);
        calcul_moy(t,n,&moy);
        printf("la moy est %.2f", moy);
 return 1 ;
}

