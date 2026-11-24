#include <stdio.h>
#include<stdbool.h>
void  saisieRemplirTab( int t[][50],int n1,int n2)
{
   for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             printf("donner l'element du tabeleau");
             scanf("%d",&t[i][j]);
         }
    }
}
void affichertab (int t[][50], int n1,int n2 ){
        for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             printf("%d\t",t[i][j]);
         }

    }
    printf("\n");


}
void somme_ligne(int t[][50],int n1,int n2, int l[]){

        for(int i=0;i<n1;i++){
        int s=0;
        for(int j=0;j<n2;j++){
            s=s+t[i][j];


        }
        l[i]=s;

    }
    }
void somme_colonne(int t[][50],int n1,int n2, int c[])
    {

        for(int i=0;i<n2;i++){
        int sc=0;

        for(int j=0;j<n1;j++){
            sc=sc+t[j][i];

         }
        c[i]=sc;
    }
    }
void afficherT (int t[], int n ){
        for(int i=0;i<n;i++){

             printf("%d\t",t[i]);
         }
             printf("\n");

    }


bool estPremier(int x){
        int i=2;
        while(i<x && x%i!=0){
            i++;
        }
        if(i<x){
          return false;
        }
        return true;
}
int nbOccurence(int  t[][50],int n1,int n2, char x){
        int s=0;
        for(int i=0;i<=n1;i++){
                for(int j=0;j<n2;j++){
                if(t[i][j]==x){
                    s++;
                }
        }
        return  s;
}}
int  NbPremiers(int t[][50],int n1,int n2){
        int k=0;
        for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
             if (estPremier && nbOccurence(t,i,j,t[i][j])==0){
                k++;
             }
         }
         return k;

    }

}

int main(){
        int n1,n2 ;
        int t[50][50], c[50],l[50] ,tP[50];
        do
        {
            printf("donner le nombre des lignes");
            scanf("%d",&n1);
        }
        while(n1<0||n1>5);
        do
        {
            printf("donner le nombre des colonnes");
            scanf("%d",&n2);
        }
        while(n2<0||n2>5);
        saisieRemplirTab(t,n1,n2);
        affichertab(t,n1,n2);
        somme_ligne( t, n1,n2,l);
        somme_colonne(t, n1,n2,c);
        afficherT(l,n1);
        afficherT(c,n2);
        printf("le nb des elements premiers est %d ",NbPremiers(t,n1,n2));

        return 1 ;
}

