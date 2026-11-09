#include <stdio.h>
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


}
void somme_ligne(int t[][50],int n1,int n2){

        for(int i=0;i<n1;i++){
        int s=0;
        for(int j=0;j<n2;j++){
            s=s+t[i][j];


        }
        printf("\n la somme des lignes est %d",s);

    }
    }
void somme_colonne(int t[][50],int n1,int n2)
    {

        for(int i=0;i<n2;i++){
        int sc=0;

        for(int j=0;j<n1;j++){
            sc=sc+t[j][i];

         }
           printf(" \n la somme des colonnes est %d",sc);
    }
    }
int main(){
        int n1,n2 ;
        int t[50][50];
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
        somme_ligne( t, n1,n2);
        somme_colonne(t, n1,n2);
        return 1 ;


}

