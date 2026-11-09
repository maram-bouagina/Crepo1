#include <stdio.h>
 void remplir_matrice(int iMat[][5],int n1,int n2){
    for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             printf("donner l'element du tabeleau");
             scanf("%d",&iMat[i][j]);
         }
    }
}

void affiche_matrice(int iMat[][5],int n1,int n2){
    for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             printf("%d\t",iMat[i][j]);
         }
    }
}


int main (){
    int n1,n2, iMat[5][5];
    do{
        printf("donner le nombre des lignes");
        scanf("%d",&n1);
    }while(n1<0||n1>5);
        do{
        printf("donner le nombre des colonnes");
        scanf("%d",&n2);
    }while(n2<0||n2>5);
    remplir_matrice(iMat,n1,n2);
    affiche_matrice(iMat,n1,n2);
    return 1;
}
